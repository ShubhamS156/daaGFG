#include <cstddef>
#include <iostream>
#include <queue>
#include <stack>
#include "Node.h"
using namespace std;

/*
 * Print the binary tree in spiral form
 * IDEA: maintain a reverse variable which denotes if the current
 * level is to be reversed.
 * if yes then instead of printing push the contents of queue in
 * stack then print later
 * else do everything normally
 */

void spiral(Node* root){
	bool reverse=false;
	stack<Node* > stk;
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		int count=q.size();
		for(int i=0;i<count;i++){
		Node* curr=q.front();
		q.pop();
		if(reverse)
			stk.push(curr);
		else{
			cout<<curr->key<<" ";
		}
		if(curr->left!=NULL)
			q.push(curr->left);
		if(curr->right!=NULL)
			q.push(curr->right);
		}
		if(reverse){
			while(!stk.empty()){
				cout<<stk.top()->key<<" ";
				stk.pop();
			}
		}
		reverse=!reverse;
	}
}
