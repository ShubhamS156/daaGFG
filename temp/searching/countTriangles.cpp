#include<iostream>
#include<algorithm>
using namespace std;

int countTriangle(int arr[],int n){
   sort(arr,arr+n);
   int j=0,res=0,k=1;
     for(int i=1;i<n-1;i++){
        k=i+1;
        while(j<i && k<n){
        if(arr[i]+arr[j]>arr[k]){
             res+=(i-j);
             k++;
         }
         else{
             j++;
         }
        }
        j=0;
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Count: "<<countTriangle(arr,n);
    return 0;
}
