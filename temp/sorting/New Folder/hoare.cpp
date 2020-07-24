/*hoare partition
partition uses first element as pivot
4 5 2 9 8 1 6*/
//5 4 3 2 1

#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

void hoareP(int arr[],int n){
  int p=arr[0];
  int i=-1,j=n;
  while(i<=j){

    do{
      i++;
    }
    while(arr[i]<p);

    do{
      j--;
    }
    while(arr[j]>p);

    if(i>=j){
      break;
    }
    swap(arr,i,j);
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << '\t';
  }
}
int main(int argc, char const *argv[]) {
  //int arr[]={5,4,3,2,1};
  //int arr[]={7,2,30,4,6};
  int arr[]={3,1,4,2,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  hoareP(arr,n);
  return 0;
}
