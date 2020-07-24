//quicksort implementation using lomuto partition
#include <iostream>
#include"lomuto.h"
using namespace std;


void swap(int [],int,int);
int lomutoP(int arr[], int l,int h){
  int p=arr[h];
  int j=l;
  for(int i=l;i<=h;i++){
    if(arr[i]<=p){
      swap(arr,i,j);
      j++;
    }
  }
  return j-1;
}
void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
void quicksort(int arr[],int l,int h){
  if(l<h){
  int m=lomutoP(arr,l,h);
  quicksort(arr,l,m-1);
  quicksort(arr,m+1,h);
 }
}

int main(int argc, char const *argv[]) {
  int arr[]={1,1,1,1,3,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,n-1);
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << '\t';
  }
  return 0;
}
