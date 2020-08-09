#include <algorithm>
#include <cmath>
#include<iostream>
#include "Node.h"
using namespace std;

/* check if the given tree is balanced or not 
 * balanced means the difference between height of left subtree and right subtree 
 * should not be more than 1.
 * IDEA: when calcualating height keep checking if difference is greater than ret
 * urn false
 */
int balanced(Node* root){
	if(root==NULL)
		return 0;
	
	int lh=balanced(root->left);
	if(lh==-1)return -1;

	int rh=balanced(root->right);
	if(rh==-1)return -1;
	
	if(abs(lh-rh)>1)
		return -1;
	else{
		return max(lh,rh)+1;
	}
			
}
int main(){
	Node* root=newNode(20);
	root->left=newNode(8);
	root->right=newNode(12);
	root->left->left=newNode(3);
	root->left->left->left=newNode(1);
	int x=balanced(root);
	if(x<0)
		cout<<"NO";
	else
		cout<<"YES";
}
