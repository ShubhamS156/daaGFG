#include<iostream>
using namespace std;

int binCloseSearch(int arr[],int l, int r,int x){
    int mid=l+(r-l)/2;

    if(arr[mid]==x)
        return mid;
    
    else if(arr[mid]>arr[mid+1]){
        if(x==arr[mid+1])
            return mid+1;
        else if(x>arr[mid+1]){
            binCloseSearch(arr,mid+2,r,x);
        }
        else{
            binCloseSearch(arr,l,mid-1,x);
        }
    }
    else if(arr[mid]<arr[mid-1]){
        if(x==arr[mid-1])
            return m-1;
        else if(x<arr[mid-1])
            binCloseSearch(arr,l,mid-2,x);
        else
        {
            binCloseSearch(arr,mid+1,r,x);
        }
        
    }
    else{
        if(x>arr[mid])
            binCloseSearch(arr,mid+1,r,x);
        else{
            binCloseSearch(arr,l,mid-1,x);
        }
    }
    return -1;
    
}