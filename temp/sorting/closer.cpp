#include<iostream>
using namespace std;
//4
//3 2 10 4 40
int closer(int arr[],int n,int k){
    int l=0,hi=n-1;
    while (l<=hi)
    {
        int mid=l+(hi-l)/2;
        
        if(arr[mid]==k)
            return k;
        else if(mid!=hi+1 && arr[mid+1]==k)
            return mid+1;
        else if(mid!=0 && arr[mid-1]==k)
            return mid-1;

        if(arr[mid]>k){ 
            //go left
            hi=mid-1;
        }   
        else if (arr[mid]<k)
        {   //go right
            l=mid+1;
        }

    
    }
    return -1;

}
int main(int argc, char const *argv[])
{
    int arr[]={1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    cout<<"Index: "<<closer(arr,n,k);
    return 0;
}
