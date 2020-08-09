#include<iostream>
#include "Node.h"
using namespace std;

/*
 * Calculate the time taken to burn the given tree if at 0th second a leaf node is burnt.
 * The time taken will be the largest distance from another leaf node
 */

int res=0; //final output;

int burn(Node* root, Node*leaf ,int &dist){ //leaf is the pointer to the leaf ndoe...dist is a  variable passed by reference which'll hold the distance to the leaf noed if the current root is its ancestor else it'll hold -1

if(root==NULL)
    return 0;
if(root->key == leaf->key){
    dist=0;
    return 1;
}
int ldist=-1,rdist=-1; //ldist will be updated if leaf lies to the left else rdist will be updated
int lh=burn(root->left,leaf,ldist);
int rh=burn(root->right,leaf,rdist);
if(ldist!=-1){
    dist=ldist+1;
    res=max(res,dist+rh);
}
else if(rdist!=-1){
    dist=rdist+1;
    res=max(res,dist+lh);
}
return max(lh+1,rh+1);
}
