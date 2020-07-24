#include<iostream>
#include<algorithm>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0;
    int res=1,count=1;
    
    while(i<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        res=max(res,count);
    }
    return res;
}

