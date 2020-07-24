/*
start from second element and maintain a sorted array from j=0 to i-1.
arr[i] is key and in sorted array shift every element greater than key by 1
insert key at the empty space
best case o(n)
worst case o(n^2)
*/

#include <iostream>
using namespace std;


void insertionSort(int arr[],int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;

    }
    arr[j+1]=key;
  }
}
int main(int argc, char const *argv[]) {
  int arr[]={5,4,2,1,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr,n);
  for (size_t i = 0; i < n; i++) {
    std::cout << arr[i] << ' ';
    /* code */
  }
  return 0;
}
