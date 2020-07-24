#include<iostream>
using namespace std;
void dutch(int arr[],int n){
    int low=0,mid=0,hi=n;
    while(mid<hi){
        switch(arr[mid]){
            case 0: swap(arr[mid],arr[low]);
                    low++;
                    mid++;
                    break;
            case 1: mid++;
                    break;
            case 2: hi--;
                    swap(arr[mid],arr[hi]);
                    break;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={0,2,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    dutch(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
