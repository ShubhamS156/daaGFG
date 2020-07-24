#include <stdio.h>

void lrotateby1(int arr[],int n){
  int tmp=arr[0];
  for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
  }
  arr[n-1]=tmp;
}
int main(int argc, char const *argv[]) {
  int arr[5]={1,2,3,4,5};
  lrotateby1(arr,5);
  for(int i=0;i<5;i++){
    printf("%d ",arr[i] );
  }
  return 0;
}
