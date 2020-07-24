#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int count(int arr[],int n){
    unordered_set<int> res;
    for(int i=0;i<n;i++){
        res.insert(arr[i]);
    }
    return res.size();
}
int main(int argc, char const *argv[])
{
    int arr[]={15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" "<<count(arr,n);

    return 0;
}
