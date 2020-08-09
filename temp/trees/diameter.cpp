#include <iostream>
#include "Node.h"
using namespace std;

/*
 * find the max number of nodes between two leaf nodes
 * IDEA: 
 *  calculate diameter by adding one to left height and right height
 *  of subtrees
 *  when returning height of a subtree by root node return the
 *  greater of the two
 */

int res=0;
int diameter(Node* root){
	if(root==NULL)
		return 0;
	int lh=diameter(root->left);
	int rh=diameter(root->right);
	int diam=lh+rh+1;
	res=max(res,diam);
	return max(lh+1,rh+1);
}
int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	root->right->right->left=newNode(60);
	diameter(root);
	cout<<"diameter: "<<res;
	return 0;
}
