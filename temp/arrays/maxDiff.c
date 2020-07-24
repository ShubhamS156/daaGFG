#include <stdio.h>

int max(int a,int b){
  return a>b?a:b;
}

int min(int a,int b){
  return a<b?a:b;
}

int maxDiff(int arr[],int n){
  int res=arr[1]-arr[0];
  int minVal=arr[0];
  for(int j=1;j<n;j++){
    res=max(res,arr[j]-minVal);
    minVal=min(minVal,arr[j]);
  }
  return res;
}


int main(int argc, char const *argv[]) {

  int arr[]={2,1,10,6,5,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("MaxDiff is: %d\n",maxDiff(arr,n) );
  return 0;
}
