#include <iostream>
#include "Node.h"
#include <queue>
using namespace std;

/*
 * Find the max width of the given binary tree
 * IDEA:
 * 	do level order traversal line by line and keep count of elements
 */

int maxWidth(Node* root){
	queue<Node*> q;
	q.push(root);
	int count=0,res=0;
	while(!q.empty()){
		count=q.size();
		res=max(res,count);
		for(int i=0;i<count;i++){
			Node* curr=q.front();
			q.pop();
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}
	}
	return res;
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->left->left=newNode(200);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	cout<<"MaxWidth: "<<maxWidth(root);
	return 0;
}
