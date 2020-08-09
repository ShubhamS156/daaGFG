#include<iostream>
#include<queue>
using namespace std;
/*
 * Approach1: remove normally like in a queue. But when adding a new item add it to the front instead of back and hence the front acts like top of the stack
 * To make pop operation costly use tail pointer.
 */
typedef struct Stack{
	queue<int> q1;
	queue<int> q2;

	int size(){
		return q1.size(); 	
	}
	void pop(){
		if(size()==0)
			return;
		q1.pop();	
	}
	void push(int key){
		//idea is to use the aux queue as aux storage and then mv back in main
		//using normal queue push operation
		while(!q1.empty()){
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(key);
		while(!q2.empty()){
			q1.push(q2.front());
			q2.pop();	
		}
	}
	int top(){
		if(size()!=0)
			return q1.front();
		else 
			return -1;	
	}
};
 

