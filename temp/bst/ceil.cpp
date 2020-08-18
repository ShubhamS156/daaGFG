#include<iostream>
#include"Node.h"
using namespace std;
/*
 * find the ceiling of the given key in a bst
 */
Node* ceil(Node* root, int x){
    Node* curr=root, *parent=NULL;
    while(curr!=NULL){
        if(curr->key==x)
            return curr;
        else if(curr->key<x)
            curr=curr->right; //go right
        else{
            parent=curr;
            curr=curr->left;
        }
    }
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
    Node* c=ceil(root,x);
   (c==NULL)?cout<<"No ceil": cout<<c->key;
    return 0;
}
