#include<iostream>
using namespace std;

void intersection(int a[],int n,int b[],int m){

    int i=0;
    int j=0;
    bool found=false;
    while(i<n && j<m){
        if(i!=0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            found=true;
            cout<<a[i++]<<" ";
            j++;
        }
    }
    if(!found)
        cout<<"-1";
}
int main(int argc, char const *argv[])
{
    int a[]={1,3};
    int b[]={2,2,4,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    intersection(a,n,b,m);
    return 0;
}
