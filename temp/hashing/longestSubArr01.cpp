#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find the longest subarr with equal number of 0s and 1s
//IDEA: 1 0 1 1 1 0 0. Replace every 0 with -1 then find the longest subarr with 0 sum
int longestSub(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){ //replace every 0 with -1
        if(arr[i]==0)
            arr[i]=-1;
    }
    int preSum=0,res=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        preSum+=arr[i];

        if(preSum==x){
            res=max(res,i+1);
        }
        if(mp.find(preSum-x)!=mp.end()){
            res=max(res,i-mp[preSum-x]);
        }
        if(mp.find(preSum-x)==mp.end()){
            mp.insert({preSum,i});
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestSub(arr,n);
    return 0;
}
