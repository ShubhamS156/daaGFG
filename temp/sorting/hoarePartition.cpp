//hoare's partition
#include <iostream>
using namespace std;

void swap(int arr[],int a,int b){
  int temp=arr[a];
  arr[a]=arr[b];
  arr[b]=temp;
}
int hpartition(int arr[],int l,int h){
  int pivot=arr[l];
  int i=l-1;
  int j=h+1;
  while (true) {
    do{
      i++;
    }
    while(arr[i]<pivot);

    do{
      j--;
    }
    while(arr[j]>pivot);

    if(i>=j){
      return j;
    }
    swap(arr,i,j);
  }
}

int main(int argc, char const *argv[]) {
  int arr[]={4,5,6,3,8,9,10,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=hpartition(arr,0,n-1);
  std::cout << "Index: "<<x<< '\n';
  for (size_t i = 0; i < n; i++) {
    /* code */
    std::cout << arr[i] << '\t';
  }
  return 0;
}
