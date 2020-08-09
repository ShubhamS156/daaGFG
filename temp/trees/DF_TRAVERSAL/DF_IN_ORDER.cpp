#include<iostream>
#include"../Node.h"
using namespace std;
/*
 * Implementation of inorder traversal
 * of a binary tree
 * IDEA: traverse the left subtree un
 * till we reach the end then print it then print the root then traverse the right subtree.
 * Do this recursively
 */
void inorder(Node *root){
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}
int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	inorder(root);
	return 0;
}
