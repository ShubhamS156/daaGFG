//radix sort
//bawal cheez
//implement counting sort on ones tenth and hundredth place
#include <iostream>
using namespace std;
void  countSort(int arr[],int n,int exp){
  int count[10];  //k=10 here as calling countsort for single digits
  int output[n];
  for(int i=0;i<10;i++)count[i]=0;
  for(int i=0;i<10;i++)count[ (arr[i]/exp)%10 ]++;
  for(int i=1;i<10;i++)count[i]+=count[i-1];
  for(int i=n-1;i>=0;i--){
    output[count[(arr[i]/exp)%10]-1]=arr[i];
    count[ (arr[i]/exp)%10 ]--;
  }
  for(int i=0;i<n;i++){arr[i]=output[i];}
}
void radixSort(int arr[],int n){
  int max=arr[0];

  for(int i=1;i<n;i++) //finding maximum element in array
    if(arr[i]>max)
        max=arr[i];
      std::cout << max << '\n';
  for(int exp=1;max/exp>0;exp=exp*10)  //calculating number of digits in element max and calling countSort for the 1s 10s place...etc
    countSort(arr,n,exp);
}


int main(int argc, char const *argv[]) {
  int arr[]={319,212,6,8,100,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  radixSort(arr,n);
  for(int i=0;i<n;i++)std::cout << arr[i] << '\t';
  return 0;
}
