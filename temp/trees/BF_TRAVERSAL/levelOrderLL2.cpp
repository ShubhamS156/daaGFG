#include<iostream>
#include <queue>
#include "../Node.h"
using namespace std;

/*
 * printing line by line tree 
 * IDEA:
 * 	insert root in queue 
 * 	while q is not empty for each node print it and add its children to the queue
 * 	break line when inner loop exits
 */

void levelOrder2(Node* root){
queue<Node*>	q;
q.push(root);
while(!q.empty()){
	int count=q.size();
	for(int i=0;i<count;i++){
		Node* curr=q.front();
		q.pop();
		cout<<curr->key<<" ";
		if (curr->left!=NULL) {
			q.push(curr->left);
		}
		if(curr->right!=NULL)
			q.push(curr->right);

	}
	cout<<endl;
}
}

int main(){
	Node *root=new Node(10);
	root->left=newNode(20);
	root->right=newNode(30);
	root->right->left=newNode(40);
	root->right->right=newNode(50);
	root->right->right->left=newNode(60);
	root->right->right->left->right=newNode(70);
	levelOrder2(root);
	return 0;
}
