#include<iostream>
#include"../Node.h"
using namespace std;

/*
 * Implementation of Post Order Traversal of a binary tree
 * call for left recursively
 * call for right recursively
 * then print root node's data
 */
void postOrder(Node* root){
	if(root==NULL)
		return ;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->key<<" ";
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	postOrder(root);
	return 0;
}
