#include <iostream>
using namespace std;
void printArr(int arr[],int n){
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << '\t';
  }
  std::cout  << '\n';
}
void countSort(int arr[],int n,int exp){
  int count[10]={0};
  int output[n];

  for(int i=0;i<n;i++){
    count[(arr[i]/exp)%10]++;
  }
  std::cout << "count arr: ";
  printArr(count,10);

  for(int i=1;i<10;i++){
    count[i]+=count[i-1];
  }
  std::cout << "count arr after sum ";
  printArr(count,n);

  for(int i=n-1;i>=0;i--){
    std::cout << "arr[i]: "<<arr[i] << '\n';
    int index=count[(arr[i]/exp)%10]-1;
    output[index]=arr[i];
    std::cout << "output[] at "<<index<<" "<<  output[index] << '\n';
    count[(arr[i]/exp)%10]--;
  }

  for(int i=0;i<n;i++){
    std::cout <<"output[i]: "<< output[i] << '\t';
    arr[i]=output[i];
    std::cout << "arr[i]: "<<arr[i] << '\n';
  }
std::cout  << '\n';
}
void radixSort(int arr[],int n){
  int max=arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  int exp;
  for(exp=1;max/exp>0;exp=exp*10){
    countSort(arr,n,exp);
  }
}
int main(int argc, char const *argv[]) {
  int arr[]={319,216,6,8,100,50};
  //int arr[]={5,4,3,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  radixSort(arr,n);
  std::cout << "res: " << '\n';
  for(int i=0;i<n;i++){
    std::cout << arr[i] << '\t';
  }
  return 0;
}
