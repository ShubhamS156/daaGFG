#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//return number of distinct intersections
//IDEA: put first arr in set. Now it will have only unique elements of the arr. Then for every element in b[] search it in the set and if found remove the element from set.
int count(int a[],int n,int b[],int m){
    unordered_set<int> u;
    u.insert(a,a+n); //insert arr in the set
    int res=0;
    for(int j=0;j<m;j++){
        if(u.find(b[j])!=u.end()){
            res++;
            u.erase(b[j]);
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int a[]={10,15,20,10,8};
    int b[]={10,10,15,15,15,8,20};
    cout<<" :"<<count(a,5,b,7);
    return 0;
}
