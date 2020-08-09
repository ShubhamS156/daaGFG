#include <cstddef>
#include <iostream>
#include <queue>
#include "Node.h"
using namespace std;

/*
 * Print the node at Kth level. Root node is at 0th level
 * IDEA:
 * 	kepp pushing nodes and their children while(k--)
 * 	then print the contents of queue
 */

void kLevel(Node* root,int k){
	queue<Node*> q;
	q.push(root);
	while(k--){
		int count=q.size();
		while(count--){
			Node* curr=q.front();
			q.pop();
			if(curr->left!=NULL)
				q.push(curr->left);
			if(curr->right!=NULL)
				q.push(curr->right);
		}		
	}
	while(!q.empty()){
		Node* curr=q.front();
		q.pop();
		cout<<curr->key<<" ";
	}
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	kLevel(root,2)	;
	return 0;
}
