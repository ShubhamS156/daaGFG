#include<iostream>
#include<stack>
#include<queue>
using namespace std;
/* pick element in top var then pop it recursively ..then push when size becomes 0
 */
void revQueue(queue<int> q1){
	if(q1.empty())
   		return;
	int top=q1.front();
	q1.pop();
	revQueue(q1);	
	q1.push(top);
}
