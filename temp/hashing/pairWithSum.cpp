#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find a pair with given sum.
//IDEA: insert elements one by one in hashset and check if it forms a pair with already inserted element.
//cannot insert elements at once coz then when we choose a number from arr[] it will be searched for in the hashset again.

bool pairWithSum(int arr[],int n,int x){
    unordered_set<int> u;
    for (int i = 0; i < n; i++)
    {
        if(u.find(x-arr[i])!=u.end()){
            return true;
        }
        u.insert(arr[i]);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<pairWithSum(arr,n,10);
    return 0;
}
