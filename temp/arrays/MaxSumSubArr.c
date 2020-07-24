//max sum in a subarray


#include <stdio.h>

int max(int a ,int b){
  return a>b?a:b;
}

int  maxSumSubArr(int arr[],int n){
  int maxEnding=arr[0];
  int res=arr[0];
  for(int i=1;i<n;i++){
    maxEnding=max(maxEnding+arr[i],arr[i]);
    res=max(res,maxEnding);
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int arr[]={1,6,-15,10,4};
  printf("Max sum in subarray is %d \n",maxSumSubArr(arr,sizeof(arr)/sizeof(arr[0])) );
  return 0;
}
