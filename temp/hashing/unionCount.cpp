#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//count distinct elements in union of two arrays
//IDEA: copy both arrays in hashset and return hashset's size
int count(int a[],int n,int b[],int m){
    
    unordered_set<int> u;
    u.insert(a,a+n);
    u.insert(b,b+m);
    return u.size();
}
int main(int argc, char const *argv[])
{
    int a[]={15,20,5,15};
    int b[]={15,15,15,10,20,15};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    cout<<": "<<count(a,n,b,m);
    return 0;
}
