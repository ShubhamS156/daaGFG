#include <stdio.h>

int oddevenSubArr(int arr[],int n){
int res=0;
for(int i=1;i<n;i++){
  int x=arr[i]%2;
  int y=arr[i-1]%2;
  if(x==y){
    res=0;
  }
  else res++;
}
return res+1;
}

int main(int argc, char const *argv[]) {
  int arr[]={5,10,20,6,3,8,9,10,11};
  printf("Longest odd even subarr is %d ",oddevenSubArr(arr,sizeof(arr)/sizeof(arr[0])) );
  return 0;
}
