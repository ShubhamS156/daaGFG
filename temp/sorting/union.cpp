#include<iostream>
using namespace std;

void unionOfArr(int a[],int n,int b[],int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(i!=0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j!=0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
        else{
            cout<<a[i++]<<" ";
            j++;
        }

        
    }
    while(i<n){
        if(i!=0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        cout<<a[i++]<<" ";
        
    }
    while(j<m){
        if(j!=0 && b[j]==b[j++]){
            j++;
            continue;
        }
        cout<<b[j++]<<" ";
    }
}
int main(int argc, char const *argv[])
{
    int a[]={2,2,3,4,5};
    int b[]={1,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    unionOfArr(a,n,b,m);
    return 0;
}
