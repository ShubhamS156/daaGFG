#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
       
        if((mid == n-1 || arr[mid]>=arr[mid+1]) && (mid ==0 || arr[mid]>=arr[mid-1])){
            return mid;
        }
        else if(mid==n-1 || arr[mid]>=arr[mid+1]){
            r=mid-1;
        }
        else if(mid==0 || arr[mid]>=arr[mid-1]){
            l=mid+1;
        }
    
    }
    return 0;

}
int main(int argc, char const *argv[])
{
    int arr[]={4,5};\
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=peak(arr,n);
    cout<<index<<endl;
    return 0;
}
