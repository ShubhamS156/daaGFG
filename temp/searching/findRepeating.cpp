#include<iostream>
using namespace std;

void findRepeating(int arr[],int n){
    int l=0,hi=n-1;
    int res=-1;
    int count=0;
    while(l<hi){
        int mid=l+(hi-l)/2;
        cout<<"index: "<<mid<<": "<<arr[mid]<<endl;
        if((mid!=0 && arr[mid]==arr[mid-1] )||(mid!=hi && arr[mid]==arr[mid+1])){
            res=arr[mid];
            break;
        }

        if(arr[mid]-arr[l]<mid-l){
            hi=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    count=n+arr[0]-arr[n-1];
    cout<<res<<" "<<count<<endl;

}
int main(int argc, char const *argv[])
{
    int arr[]={2,3,4,5,6,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    findRepeating(arr,n);
    return 0;
}
