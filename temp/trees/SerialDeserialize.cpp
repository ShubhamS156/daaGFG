#include<iostream>
#include"Node.h"
#include<vector>

#define EMPTY -1
using namespace std;

/*
 * Serialize -> convert from binary tree to a array
 * Deserialize -> convert from array to binary tree
 */

void serialize(Node* root, vector<int> &arr){
    if(root==NULL){
        arr.push_back(EMPTY);
        return ;
    }
    arr.push_back(root->key);
    serialize(root->left,arr);
    serialize(root->right,arr);

}

int index=0;
Node* deserialize(vector<int> &arr){
    if(index==arr.size())
        return NULL;
    int val=arr[index];
    index++;
    if(val==-1){
        return NULL;
    }
    Node* root=new Node(val);
    root->left=deserialize(arr);
    root->right=deserialize(arr);
    return root;
}

