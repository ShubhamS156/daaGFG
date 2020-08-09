#include<iostream>
#include<stack>
using namespace std;
//implementing stack using supposedly linked list
/*
IDEA: maintain an stack while pushing that keeps track of the smallest element yet.
*/
stack<int> ms; //main stack
stack<int> as; //auxilary stack's top contatins the minimum element yet
int ModeifiedPush(int key){
   ms.push(key);
   if(ms.top()<=as.top())
    as.push(key); 
}
int ModifiedPop(){
    if(as.top()==ms.top()){
        as.pop();
    }
    ms.pop();
}