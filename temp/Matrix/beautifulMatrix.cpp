#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int SIZE=100;
int beauty(int mat[][2],int n){
    int sumR[n],sumC[n];
    memset(sumR,0,sizeof(sumR));
    memset(sumC,0,sizeof(sumR));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sumR[i]+=mat[i][j];
            sumC[j]+=mat[i][j];
        }
    }
    
    
    int maxSum=0;
    for(int i=0;i<n;i++){
        maxSum=max(maxSum,sumR[i]);
        maxSum=max(maxSum,sumC[i]);
    }
    cout<<"MaxSum: "<<maxSum<<endl;
    int diff=0;

    for(int i=0;i<n;i++){
        diff=diff+(maxSum-sumR[i]);
    }
    return diff;
    
}
int main(int argc, char const *argv[])
{
    int n=2;
    int mat[][2]={{1,2},{3,4}};
    cout<<"Min swap: "<<beauty(mat,n);

    return 0;
}


