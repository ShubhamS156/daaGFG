#include<iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int roofTop(int arr[],int n){
    int temp=0,res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            temp++;
        }
        else{
            temp=0;
        }
        res=max(res,temp);
        
    }
    return res;
}

