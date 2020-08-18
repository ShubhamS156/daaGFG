#include<iostream>
#include "Node.h"
#include<stack>
using namespace std;

/* first element of the given preorder array will be the root of the entire tree
 * so push it in the stack. Then move onto the next element check if it belongs
 * in the left or right subtree. Connect to the appropriate subtree. If it doesn't
 * belong in either then the current root is not a parent of the node so pop it
 * from the stack until we find a subtree to place the node in.
 */

//function to construct a bst using preorder arr
typedef struct nodeDetails{
    Node* ptr;
    int min;
    int max;
    nodeDetails(){
        ptr=NULL;
        min=INT32_MIN;
        max=INT32_MAX;
    }
}nodeDetails;
Node* construct(int arr[],int n){
   
    if(n==0)
        return NULL;

    Node* root=new Node(arr[0]) ;
    stack<nodeDetails> s;
    nodeDetails newNode;
    newNode.ptr=root;
    s.push(newNode);
    for(int i=1;i<n;i++){
       nodeDetails tmp=s.top();
           while(!s.empty() && (arr[i] < tmp.min || arr[i]>tmp.max)){
               s.pop();
               tmp=s.top();
       }

        if(arr[i]<tmp.ptr->key && arr[i]>tmp.min) //means leftchild
        {
            nodeDetails n;
            n.ptr=new Node(arr[i]);
            n.min=tmp.min;
            n.max=tmp.ptr->key;
            tmp.ptr->left=n.ptr;
            s.push(n);
        }
        else if(arr[i] > tmp.ptr->key && arr[i] < tmp.max) //means rightchild
        {
            nodeDetails n;
            n.ptr=new Node(arr[i]);
            n.min=tmp.ptr->key;
            n.max=tmp.max;
            tmp.ptr->right=n.ptr;
            s.push(n);
        }

    }
    return  root;
}
void postOrder(Node* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->key<<" ";
}
int main(){
    int pre[]={40,30,32,35,80,90,100,120};
    int n=sizeof(pre)/sizeof(pre[0]);
    postOrder(construct(pre,n));
    return 0;
}
