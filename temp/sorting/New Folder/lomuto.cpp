//lamuto partition
//partition using the element as pivot
//4 5 2 9 8 1 6

#include <iostream>
//#include "lomuto.h"
using namespace std;
void swap(int [],int,int);
void lomutoP(int arr[], int n){
  int p=arr[n-1];
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]<=p){
      swap(arr,i,j);
      j++;
    }
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << '\t';
  }
}
void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

/*
int main(int argc, char const *argv[]) {
  int arr[]={4 ,5, 2, 9, 8 ,1 ,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  lomutoP(arr,n);
  return 0;
}
*/
