#include<iostream>
#include <iterator>
#include<queue>
#include "../Node.h"
using namespace std;

/*
 * Print the tree level by level
 * IDEA: push root and null into queue
 * null acts as break line every time you encounter null goto next line
 * each time you encounter a node push its left and right children in the queue
 */

void levelOrderLL(Node *root){
	if(root==NULL)
		return;
	queue<Node *> q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1){
		Node *curr=q.front();
		q.pop();
		if(curr==NULL){
			cout<<endl;
			q.push(NULL);
			continue;
		}
		cout<<curr->key<<" ";
		if(curr->left!=NULL)
			q.push(curr->left);
		if(curr->right!=NULL)
			q.push(curr->right);
		}
	}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	root->right->right->left=newNode(60);
	root->right->right->left->right=newNode(70);
	levelOrderLL(root);
	return 0;
}
