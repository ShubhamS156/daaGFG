#include<iostream>
#include"Node.h"
#include<queue>
using namespace std;

typedef struct nodeDetails{
    Node* ptr;
    int min,max;
    nodeDetails(){
        ptr=NULL;
        min=INT32_MIN;
        max=INT32_MAX;
    }

}nodeDetails;

//function to print preOrder traversal
void preOrder(Node* root){
    if(root==NULL)
        return;
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

//function to construct bst from level order traversal

Node* construct(int arr[],int n){
    if(n==0)
        return NULL;
    Node* root;
    int i=0;
    queue<nodeDetails> q;
    nodeDetails newNode;
    newNode.ptr=new Node(arr[i++]);
    newNode.min=INT32_MIN;
    newNode.max=INT32_MAX;

    root=newNode.ptr;
    q.push(newNode);
    while(i!=n){
        nodeDetails tmp=q.front();
        q.pop();
        if(i<n && (arr[i]<tmp.ptr->key && arr[i]>tmp.min)){
            nodeDetails n;
            n.ptr=new Node(arr[i++]);
            n.max=tmp.ptr->key;
            n.min=tmp.min;
            tmp.ptr->left=n.ptr;
            q.push(n); 
        }
        if(i<n &&(arr[i]>tmp.ptr->key && arr[i]<tmp.max)){
            nodeDetails n;
            n.ptr=new Node(arr[i++]);
            n.max=tmp.max;
            n.min=tmp.ptr->key;
            tmp.ptr->right=n.ptr;
            q.push(n);
        }
    }
    return root;
}
int main(){
    int arr[]={7,5,12,3,6,8,1,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    preOrder(construct(arr,n));
    return 0;
}
