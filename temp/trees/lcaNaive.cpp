#include <iostream>
#include <vector>
#include "Node.h"
using namespace std;

/*
 * find the lowest common ancestor
 * IDEA: 
 * 	build path array then return the last repeating element
 */

bool find(Node* root,vector<Node*>&v,int n){ //builds the path array recursively
	if(root==NULL)  //if current node is null retrun false as n1 n2 are presumed not null
		return false;
	v.push_back(root); //push current node in the vector to check if it is n1 or n2 or else if its left or right subtree contaion n1 or n2
	if(root->key==n)
		return true;
	if(find(root->left,v,n) || find(root->right,v,n))
		return true;
	v.pop_back(); //if by now we havent return true means  we have  checked the current node for n1 or n2 and also the left and right subtree of the current node.  Hence current node as root node doesnt have n1 or n2. so pop it out and return false
	return false;
}

int lca(Node* root,int n1,int n2){
	vector<Node*> v1;
	vector<Node*> v2;
	if(!find(root,v1,n1))
		return -1; //-1 signifies node not found
	if(!find(root,v2,n2))
		return -1;
	int count=min(v1.size(),v2.size());
	for(int i=0; i<count-1;i++){ //if we are here in the code means
		if(v1[i+1]!=v2[i+1])
			return v1[i]->key;
	}	
    return 1;
}
