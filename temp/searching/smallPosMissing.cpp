//smallest missing positive number
#include<iostream>
using namespace std;

int smallPos(int arr[],int n){
    //segregate
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    //index as element
    for(int i=0;i<j;i++){
        if(arr[i]<=n)
            arr[abs(arr[i])-1]*=-1;
    }
    for(int i=0;i<j;i++){
        if(arr[i]>0){
            return i+1;
        }
    }
    return j+1;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,-3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"missing: "<<smallPos(arr,n);
    return 0;
}
