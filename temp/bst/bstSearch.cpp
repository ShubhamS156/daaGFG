#include<iostream>
#include "Node.h"
using namespace std;

bool search(Node* root,int x){ 
    if(root==NULL)
        return false;
    else if(root->key==x)
        return true;
    else if(root->key>x)
        return search(root->left,x);
    else{
        return search(root->right,x);
    }
}

