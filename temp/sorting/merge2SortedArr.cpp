#include <iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[],int n1,int arr2[],int n2){
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(arr2[j]>arr1[i]){
      std::cout << arr1[i] << " " ;
      i++;
    }
    else{
      std::cout << arr2[j] << " ";
      j++;
    }
  }
  while(i<n1){
    std::cout << arr1[i] << " ";
    i++;
  }

  while (j<n2){
    std::cout << arr2[j] << " ";
    j++;
  }
}

int main(int argc, char const *argv[]) {
  int arr1[]={1,4,6,10};
  int arr2[]={2,3,5,9,12,20};
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  int n2=sizeof(arr2)/sizeof(arr2[0]);
  mergeTwoSortedArray(arr1,n1,arr2,n2);
  return 0;
}
