//sort an array of 0 1 and 2
//also called dutch national flag algorithm
//3-way partitioning algorithm
#include <iostream>
using namespace std;
void swap(int arr[],int i ,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
void dutchAlgo(int arr[],int n){
  int low=0,mid=0,hi=n-1;
  while(mid<=hi){
    int t=arr[mid];
    switch(t) {
      case 0:swap(arr,low,mid);
             low++;
             mid++;
             break;
      case 1:mid++;
            break;
      case 2:swap(arr,mid,hi);
             hi--;
             break;

    }
  }
}

int main(int argc, char const *argv[]) {
  int arr[]={1,0,2,1,1,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  dutchAlgo(arr,n);
  for(int i=0;i<n;i++){
    std::cout << arr[i] << '\t';
  }
  return 0;
}
