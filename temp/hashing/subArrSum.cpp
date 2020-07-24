#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find subarr with given sum
//IDEA: suppose if presum till index i is a and then till index j is b and if b-a is equal to the desired sum then it means that after the presum becomes x there were a few elements which added to become the desired sum coz x + desired=y. so we just have to check if a presum-desired already exists.
bool sumX(int arr[],int n,int x){
    unordered_set<int> u;
    int preSum=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        if(preSum==x)  //when the subarr with sum x starts from 0th index
             return true;
        if(u.find(preSum-x)!=u.end())
            return true;
        //  if(x==0 && preSum==0) //when x is 0
        //     return true; 
        u.insert(preSum);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int arr[]={5,8,6,13,3,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<": "<<sumX(arr,n,0);
    return 0;
}

