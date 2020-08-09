#include <iostream>
#include <stack>
#include "Node.h"
using namespace std;

/*
 * print the given binary tree spirally
 * IDEA:
 * 	use two stacks to reverse the layer each time
 * 	its like jugglin water in two glasses
 */
void spiral(Node* root){
	cout<<"asd"<<endl;
	stack<Node*> s1;
	stack<Node*> s2;
	s1.push(root);
	while(!s1.empty() ||	!s2.empty()){
		while(!s1.empty()){
			Node* curr=s1.top();
			s1.pop();
			cout<<curr->key<<" ";
			//push children in s2
			if(curr->left!=NULL)
				s2.push(curr->left);
			if(curr->right!=NULL)
				s2.push(curr->right);
		}	
		while(!s2.empty()){
			Node* curr=s2.top();
			s2.pop();
			cout<<curr->key<<" ";
			//push children in s1 ..right child first
			if(curr->right!=NULL)
				s1.push(curr->right);
			if(curr->left!=NULL)
				s1.push(curr->left);
		}
	}
}


int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	spiral(root);
	return 0;
}
