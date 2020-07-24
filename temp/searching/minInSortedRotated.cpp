#include<iostream>
using namespace std;
//4 3 1 2
int min(int arr[],int l,int h){
    int res=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        cout<<"index: "<<mid<<": "<<arr[mid]<<endl;
        if((mid==h || arr[mid]<arr[mid+1]) && (mid==0 ||arr[mid]<arr[mid-1])){
            res=arr[mid];
            break;
        }

        else if(arr[mid]>arr[h]){
            
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={8,1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"min: "<<min(arr,0,n-1)<<endl;
    return 0;
}
