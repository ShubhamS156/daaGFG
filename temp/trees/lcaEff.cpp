#include<iostream>
#include "Node.h"
using namespace std;

/*
 * find the lowest common ancestor.
 * IDEA: 4 conditions in total
 *  condition1: if node is null return false;
 *  condition2: if n1 is in left/right and n2 is in the other subtree return true and mark this node as lca
 *  condition3: if n1 is in left/right subtree and n2 is in the same subtree then move to that subtree;
*/

Node* lcaEff(Node* root,int n1,int n2){
    if(root==NULL)
        return NULL;
    if(root->key==n1 || root->key==n2){
        return root;
    Node* left_lca=lcaEff(root->left,n1,n2);
    Node* right_lca=lcaEff(root->right,n1,n2);
    
    if(left_lca && right_lca)
        return root;
    
    return (left_lca!=NULL)?left_lca:right_lca; //skipped above condition means one of them is null so if right is null return left  else return right
}
