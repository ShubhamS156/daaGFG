#include <iostream>
#include "Node.h"
using namespace std;

/*
 * Find the height of the tree
 * IDEA: try recursively finding the length to leaf for left and right subtree
 * add 1 to the max of lh and rh for each subtree
 */

int height(Node* root){
	if(root==NULL)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	
	return 1+max(lh,rh);
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	cout<<height(root);
	return 0;
}
