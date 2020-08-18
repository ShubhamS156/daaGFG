#include<iostream>
#include<queue>
using namespace std;

/* Find the k largest elements in the given arr
 * NAIVE: sort the array and print the last k elements: O(nlogn)
 * MAX_HEAP based: build a max heap out of the arr and pop max item k times:O(n+klogn)
 * MIN_HEAP based: build a min heap of the first k items then starting from k+1
 * see if the current element is greater than top of the minheap(i.e. smallest seen yet) if yes then replace the smallest and push current and heapify.
 * if curr is smaller than the smallest yet ignore it.
 * this ensures that minheap contains the k largest elements out of all items 
 * seen so far: O(k + (n-k)logk)
 */
vector<int> kLargest(int arr[], int n, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    vector<int> res;
    while(!pq.empty()){
        res.push_back(pq.top());
        pq.pop();
    }
    sort(res.begin(),res.end(),greater<int>);
    return res;
}
