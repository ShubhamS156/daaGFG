//idea: for every element find the remaining sum then for the remaining array use two pointer
#include<iostream>
#include<algorithm>

using namespace std;

int triplet(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        int sum=x-arr[i];
        int j=i+1,k=n-1;
        while(j<k){
            if(arr[j]+arr[k]==sum)
                return 1;
            else if (arr[i]+arr[j]>sum)
                k--;
            else j++;

        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,4,45,6,10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=13;
    cout<<triplet(arr,n,x);
    return 0;
}
