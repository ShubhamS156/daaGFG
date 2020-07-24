#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find subarr with sum 0
//NAIVE: starting from 0th element calculate sum for every subarr possible O(n^2);
//IDEA: starting from first element calculate prefix sum..then search for that sum if it already exists return true else insert it in hashset.If prefix sum is repeated then it means that a subarr has 0 sum. Explicitly handle for case when prefix sum is 0.

bool sum0(int arr[],int n){
    unordered_set<int> u;
    int preSum=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        if(u.find(preSum)!=u.end())
            return true;
        else if(preSum==0){
            return true;
        }
        u.insert(preSum);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int arr[]={11,5,6,-6};
    cout<<" "<<sum0(arr,4);
    return 0;
}
