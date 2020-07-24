#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//IDEA: create a map and arr values act as key and their freq as values
void count(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;  //go to key arr[i] and incremement value. If key not present first insert then increment
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    //cout<<": "<<mp[4,2];
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,2,2,3,3,3,4,4,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    count(arr,n);
    return 0;
}
