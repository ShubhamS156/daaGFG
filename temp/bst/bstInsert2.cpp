#include<iostream>
#include"Node.h"
using namespace std;

/*
 * Iterative solution for inserting in a bst
 */
Node* root(Node* root,int x){
    Node* tmp=new Node(x);
    Node* parent=NULL, *curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root; //if node already exists return root and exit function
    }
    if(parent==NULL)
        return tmp;
    if(parent->key>x)
        parent->left=tmp;
    else{
        parent->right=tmp;
    }
    return root;
}


