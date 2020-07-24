#include<iostream>
#include<algorithm>
using namespace std;


int x;
void set(int k){
    x=k;
}
bool myComp(int a,int b){
    return abs(a-x)<abs(b-x);
}
void sortABS(int arr[],int n,int k){
    set(k);
    stable_sort(arr,arr+n,myComp);
}
int main(int argc, char const *argv[])
{
    int arr[]={10,9,5,3,9,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    sortABS(arr,n,k);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
