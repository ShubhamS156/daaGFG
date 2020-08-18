#include<iostream>
#include"Node.h"
using namespace std;

/*
 * Delete a node from the given bst
 * 4 cases:
 * 1-> when deleting a leaf node ==> simply delete and link the parent to NULL
 * 2-> when deleting a node with single child==> delete the node and link the non null child to the parent
 * 3-> when deleting an internal node==> find the inorder successor i.e. closest greater or closest smaller. Closest greater would be
 * the leftmost child of the right child.
 * 4-> node not present==> simply return root do not modify the tree
 */
Node* getSucc(Node* curr){
    curr=curr->right;// go to the right subtree and find the leftmost node;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
return curr;
}
Node* deleteNode(Node* root, int x){
    if(root==NULL)
        return root;
    else if(root->key>x){
        root->left=deleteNode(root->left,x);
    }
    else if(root->key<x){
        root->right=deleteNode(root->right,x);
    }
    else{
        //we found the node to be deleted
        if(root->right==NULL){
            Node* tmp=root->left;
            delete(root);
            return tmp;
        }
        else if(root->left==NULL){
            Node* tmp=root->right;
            delete(root);
            return tmp;
        }
        else{
            //node to be deleted is an internal node
            Node* succ=getSucc(root);
            root->key=succ->key;
            root->right=deleteNode(root->right,succ->key);
        }
        return root;
    }
}
