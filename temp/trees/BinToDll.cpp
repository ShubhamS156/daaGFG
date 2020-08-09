#include <iostream>
#include "Node2.h"
using namespace std;

/*
 * Convert the given binary tree to a doubly linked list
 * IDEA: maintain a previous pointer 
 * while doing inorder traversal
 */
Node2* prev_Node=NULL;
void binTOdll(Node2* root){
	if(root==NULL)
		return ;
	
	
Node2* head=	binTOdll(root->left);
if(prev_Node==NULL)
	head=root;
	
else{
		root->prev=prev_Node;
		prev_Node->next=root;
	}

prev_Node=root;
binTOdll(root->next);
}
