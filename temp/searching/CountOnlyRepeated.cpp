#include<iostream>
using namespace std;

int repeating(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==arr[mid-1] || arr[mid]==arr[mid+1])   //write conditions for corner cases
            return arr[mid];
        else if (mid>arr[mid]-arr[start]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    
}
int count(int arr[],int n){
    int res=n-(arr[n-1])+1;
    return res;
}
void countRep(int arr[],int n){
    cout<<repeating(arr,n)<<" "<<count(arr,n);
}
int main(int argc, char const *argv[])
{   
    int t;
    cin>>t;
    while(t--){
    int arr[]={2,2,3,4,5,6};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int 
    countRep(arr,n);
    }
    return 0;
}
