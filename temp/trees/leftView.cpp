#include <iostream>
#include "Node.h"
using namespace std;

/*
 * print the left view of a binary tree
 * IDEA:
 * 	maintain a variable current_level which stores at what level we are in binary
 * 	tree and a variable max_level which stores the max level we've been yet if
 * 	current_level>max_level then print else move to the next level;
 */
int max_level=0;
void leftView(Node* root, int level){
	if(root==NULL)
		return ;
	if(level>max_level){
		cout<<root->key<<" ";
		max_level=level;
	}
	leftView(root->left,level+1);
	leftView(root->right,level+1);
}
int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	leftView(root,1);
	return 0;
}
