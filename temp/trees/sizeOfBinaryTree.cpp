#include<iostream>
#include "Node.h"
using namespace std;

/*
 * Count nodes in a binay tree
 * IDEA:
 * return 1+size(root->left)+size(root->right);
 * time complexity O(n)
 * space complexity O(h) height of tree
 */

int sizeOfTree(Node *root){
	if(root==NULL)
		return 0;
	return 1+sizeOfTree(root->left)+sizeOfTree(root->right);
}


int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	cout<<sizeOfTree(root);
	return 0;
}
