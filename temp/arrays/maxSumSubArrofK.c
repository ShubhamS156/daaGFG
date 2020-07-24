//find the max sum of subarray of size k;
#include<stdio.h>

int max(int a ,int b){
  return a>b?a:b;
}
int slidingWindowK(int arr[],int n,int k){  //k=3
  int currSum=0;
  for(int i=0;i<k;i++)
    currSum+=arr[i];
int maxSum=0;
  for(int i=k;i<n;i++){
    currSum+=(arr[i]-arr[i-k]);
    maxSum=max(maxSum,currSum);
  }
  return maxSum;
}
int main(int argc, char const *argv[]) {
  int arr[]={1,5,30,-5,20,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  printf("Max sum of subarr of size %d is %d\n",k,slidingWindowK(arr,n,k) );
  return 0;
}
