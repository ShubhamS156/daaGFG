#include<iostream>
using namespace std;

int majority(int arr[],int n){
    int count=0;
    int cand=-1;
    for(int i=0;i<n;i++){
        if(count==0){
            cand=arr[i];
            
        }
        if(arr[i]==cand){
            count++;
        }
        else{
            count--;
        }
        
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==cand){
            j++;

        }
        if(j>n/2){
            return cand;
        }
    }
}