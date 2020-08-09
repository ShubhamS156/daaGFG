#include<iostream>
#include<queue>
#include<stack>
using namespace std;

/* pop from queue and put it in stack...then pop from stack and put it in res 
 * queue
 * */
queue<int> revQueue(queue<int> &q1){
	stack<int> st;
	while(!q1.empty()){
		st.push(q1.front());	
		q1.pop();
	}
	queue<int> res;
	while(!st.empty()){
		res.push(st.top())	;
		st.pop();
	}
	return res;
}

int main(){
	queue<int> q1;
	for(int i=0;i<5;i++)
		q1.push(i);

	queue<int> q2=revQueue(q1);
	while(!q2.empty()){
		cout<<q2.front()<<"  ";
		q2.pop();	
	}
return 0;
	
}
