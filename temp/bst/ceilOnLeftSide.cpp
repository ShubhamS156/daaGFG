#include<iostream>
#include"Node.h"
#include<set>
using namespace std;
/*
 * Given an array find the ceiling of each element in the left side of the array
 * IDEA: use a bst keep inputting elements from array and finding the ceiling using the lower_bound function
 * and after each iteration insert the element into the tree
 */

void printCeil(int arr[],int n){
    set<int> s;
    cout<<"-1"<<" "; //ceil of the first element will always be -1;
    s.insert(arr[0]);
    for(int i=1;i<n;i++){
        auto it=s.lower_bound(arr[i]);
        if(it==s.end())
            cout<<"-1 ";
        else
            cout<<*it<<" ";
        s.insert(arr[i]);
    }
}
int main(){
    int arr[]={2,8,30,15,25,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    printCeil(arr,n);
    return 0;
}
