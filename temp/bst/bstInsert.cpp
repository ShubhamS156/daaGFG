#include<iostream>
#include"Node.h"
using namespace std;

/*
 * Insert a node in the given bst
 *IDEA:
    Search for it if present exit else search until you find a leaf node add node there 
*/
Node* insert(Node* root,int x){
    if(root==NULL)
        return new Node(x);
    else if(root->key>x){
       root->left=insert(root->left,x);
    }
    else{
       root->right=insert(root->right,x);
    }
    return root;

}
