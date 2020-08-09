#include <iostream>
#include "Node.h"
using namespace std;

/* construct a binary tree using inorder and preorder array given
 */
int preIndex=0;
Node* construct(int pre[],int in[],int n,int start,int end){
	if(start>end)
		return NULL;
	Node* root=new Node(pre[preIndex]);

	int inIndex;
	for(int i=start; i <= end;i++){
		if(in[i]==root->key){
			inIndex=i;
			break;
		}
	}
	root->left=construct(pre, in, n, start,inIndex-1);
	root->right=construct(pre,in,n,inIndex+1,end);
	return root;
}

