#include<iostream>
#include<queue>
using namespace std;

/*
 * Find the max numbers of items you can purchase with the given sum out of an array given where each element 
 * is the cost of an item.
 * 
 * NAIVE: sort and keep increasing count while sum of all the picked element is less than the given sum
 * EFF: make a heap out of the given array and keep extracting min
 */

int purchase(int arr[],int n,int sum){
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n); //initialised the pq to array arr
    int count=0; 
    int tmp=pq.top();
    while(tmp<sum){
        count++;
        pq.pop();
        sum-=tmp;
        tmp=pq.top();
    }
    return count;
}
int main(){
    int arr[]={1,12,5,111,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<purchase(arr,n,10);
}
