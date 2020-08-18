#include<iostream>
#include"Node.h"
using namespace std;

/*
 * Find the floor of a given number in the bst
 * IDEA: if curr > x go left else if curr< x go right stop when equal or the subtree where you're gonna find the floor is null
 */ 
Node* floor(Node* root,int x){
    Node* curr=root, *parent=NULL;
    
    while(curr!=NULL){
        if(curr->key==x)
            return curr;
        else if(curr->key>x)
            curr=curr->left;
        else{
            parent=curr;
            curr=curr->right;

            
    }
    }
    //we exited because in the direction which we were supposed to go was null
    return parent;
}
int main(){
    Node* root=new Node(50);
    root->right=new Node(70);
    root->right->right=new Node(80);
    root->right->left=new Node(60);
    root->right->left->left= new Node(55);
    root->right->left->right= new Node(68);
    root->left=new Node(30);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    int x;
    cin>>x;
    Node* f=floor(root,x);
    cout<<f->key;
    return 0;
}
