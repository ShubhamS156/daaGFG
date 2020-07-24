//kth smallest element for random input

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int h){
    cout<<"l: "<<l<<" h: "<<h<<'\n';
    int tmp=rand();
    cout<<"temp: "<<tmp<<'\n';
    int index=l+tmp%(h-l+1);      //to convert number from l to h including both
    cout<<"index: "<<index<<'\n';
    int p=arr[index];
    cout<<"p: "<<p<<'\n';
    swap(arr,index,h);
    cout<<"after swp:"<<'\n';
    for (int i = 0; i<=h; i++)
    {
        cout<<arr[i]<<'\t';
    }
    
    int pivot=arr[h];
    cout<<"pivot: "<<pivot<<'\n';
    int j=l;
    for(int i=l;i<=h;i++){
        if(arr[i]<=pivot){
            swap(arr,i,j);
            j++;
        }
    }
    for (int i = 0; i<=h; i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<'\n';
    
    return j-1;
}
int kt(int arr[],int n,int k){
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        int m=partition(arr,l,h);
        cout<<"m: "<<m<<" k-1: "<<k-1<<'\n';
        if(m==k-1){
            return arr[m];
        }
        if(m<k-1){
            l=m+1;
        }
        else{
            h=m-1;
        }      
    }

    return -1;
    
}
int main(int argc, char const *argv[])
{   int t;
    std::cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        int arr[n];
         for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        cout<<kt(arr,n,k)<<'\n';
    }
    
    return 0;
}
