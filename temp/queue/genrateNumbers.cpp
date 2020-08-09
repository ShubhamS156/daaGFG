#include<iostream>
#include<queue>
#include<string>
using namespace std;

void generateNum(int n){
	queue<string> q1;
	q1.push("5");
	q1.push("6");
	for (int i=0; i<n; i++) {
	string curr=q1.front();
		cout<<curr<<"  ";
		q1.pop();
		q1.push(curr+"5");
		q1.push(curr+"6");
	}
}
int main(){
int n=5;
generateNum(5);
return 0;
}
