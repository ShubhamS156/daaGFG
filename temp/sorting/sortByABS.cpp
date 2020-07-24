#include<iostream>
#include<cstdlib>

typedef struct sABS{
    int x;
    int y;
}sABS;

bool comp(sABS a,sABS b){
    return a.y<b.y;
}
void sortABS(int arr[],int n,int k){
    sABS s[n];
    for(int i=0;i<n;i++){
        s[i].x=arr[i];
    }
    for(int i=0;i<n;i++){
        s[i].y=abs(k-arr[i]);

    }
    stable_sort(s,s+n,comp);
    for (int i = 0; i < n; i++)
    {
        arr[i]=s[i].x;
    }
    
    
}