#include <cstdint>
#include <iostream>
#include "Node.h"
using namespace std;

/*
 * Find the node with the largest key in tree
 * IDEA: 
 * 	traverse every node and maintain a global variable res
 */

int res=0;
int getMax(Node* root){
	if(root==NULL)
		return INT32_MIN;
	
	return max(root->key,max(getMax(root->left),getMax(root->right)));	
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	cout<<getMax(root);
	return 0;
}
