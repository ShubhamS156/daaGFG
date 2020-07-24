#include<iostream>
#include<algorithm>

using namespace std;

int lpartition(int arr[],int l,int h){
 
        int pivot=arr[h];
        int j=l;
        for(int i=l;i<=h;i++){
            if(arr[i]<=pivot){
                swap(arr[j],arr[i]);
                j++;
            }
        }
        return j-1;
    }
int kth(int arr[],int n,int k){
    int l=0,h=n-1;
    while (l<=h)
    {
       int a=lpartition(arr,l,h);
       if(a==k-1){
           return arr[a];
       }
       else if(a>k-1){
           
           h=a-1;
       }
       else{
           
           l=a+1;
       }

    }
    return 0;
    
}
int main(int argc, char const *argv[])
{
   // int arr[]={7,10,4,3,20,15};
   int arr[]={7,10,4,20,15};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<": "<<kth(arr,n,k);

    return 0;
}
