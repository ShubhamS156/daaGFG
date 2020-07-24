#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Find the longest subarr with given sum
//IDEA: store the first occurence of every prefix sum. 
int longestSubarr(int arr[],int n,int x){
    unordered_map<int,int> mp;
    int preSum=0,res=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        if(preSum==x){
            res=max(res,i+1);
        }
       else if(mp.find(preSum-x)!=mp.end())
            res=max(res,i-mp[preSum-x]);
        else if(mp.find(preSum-x)==mp.end()){
            mp.insert({preSum,i});
        }
        
        
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={8,3,1,5,-6,6,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=4;
    cout<<": "<<longestSubarr(arr,n,sum);
    return 0;
}
