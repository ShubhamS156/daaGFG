#include<iostream>
#include<queue>
using namespace std;

/*
 * Sort a k sorted array. K sorted means the correct index of an element at index i can be between i-k to i+k 
 * Naive: simply sort the whole array
 * Efficient: build a heap of first k+1 elements then extract min and push another element in..keep doin this 
 * in the end k elements will be left in the heap. Pop 'em and print them
 */

void sortKsorted(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    int index=0;
    for(int i=0;i<=k;i++){ //index of 0th can be -2 to 2 thats why i<=k
        pq.push(arr[i]);
    }

    for(int i=k+1;i<n;i++){ //initially there are 3 elements find min then push another
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    //now k elments are left in the heap

    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }
}
