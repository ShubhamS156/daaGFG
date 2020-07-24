//quick select algo to find the kth smallest element
//worst case o(n^2)

#include <iostream>
//#include"lamuto.h"
using namespace std;
void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
 }
int lamuto(int arr[],int l,int h){
  int p=arr[h];  //to handle cases when pivot is not the last element
//  swap(arr,index,h);// make pivot  last element and proceed normally
  int j=0;
  for(int i=0;i<=h;i++){
    if( arr[i]<=p){
      swap(arr,i,j);
      j++;
    }

  }
  return j-1;
}
int quickSelect(int arr[],int n,int k){
    int l=0;
    int r=n-1;
    while(l<=r){
      int p=lamuto(arr,l,r);
      if(p==k-1){
        return p;
      }
      if(p>k-1){
        r=p-1;
      }
      else{
        l=p+1;
      }
    }
    return -1;
}
int main(int argc, char const *argv[]) {
  int arr[]={10,5,11,8,6,26};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=3;
  printf("Element is %d\n",arr[quickSelect(arr,n,k)] );
  return 0;
}
