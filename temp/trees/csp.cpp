#include <iostream>
#include "Node.h"
using namespace std;

/*
 * check if the given binary tree has children sum property
 * IDEA: 
 * 	for each node check if it is sum of node at left and right recursively
 */

bool csp(Node* root){
	if(root==NULL)
		return true;
	if(root->left==NULL && root->right==NULL)
		return true;
	int sum=0;
	if(root->left!=NULL)
		sum+=root->left->key;
	if(root->right!=NULL)
		sum+=root->right->key;

	return(sum==root->key && csp(root->left) && csp(root->right));
}
int main(){
	Node* root=newNode(20);
	root->left=newNode(8);
	root->right=newNode(12);
	root->left->left=newNode(3);
	root->left->right=newNode(5);
	cout<<csp(root);
}
