#include<iostream>
#include"../Node.h"
using namespace std;

/*
 * Implementation of pre order traversal
 * root left right 
 * IDEA: print root 
 * then recursively call for first left subarray then right subarray
 */
void preorder(Node* root){
	if(root==NULL)
		return ;
	cout<<root->key<<" ";
	preorder(root->left);
	preorder(root->right);
}





int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	preorder(root);
	return 0;
}
