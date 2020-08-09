#include <iostream>
#include "Node.h"
using namespace std;

/*
 * Print all the nodes at level k. Root node is at level 0
 * IDEA: use recursion
 * 	recursively traverse every node and as you go one level down decrease k by 1
 * 	when k becomes 0 you are at the correct level then print the key and dont 
 * 	call further nodes
 */

void printNode(Node* root,int k){
	if(root==NULL)
		return;
	if(k==0)
		cout<<root->key<<" ";
	else{
		printNode(root->left,k-1);
		printNode(root->right,k-1);
	}
}
int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	printNode(root,0)	;
	return 0;
}
