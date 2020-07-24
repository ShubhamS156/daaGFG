#include <stdio.h>

void reverseArr(int arr[], int n){
int temp;
  for(int i=0;i<n/2;i++){
    temp=arr[(n-1)-i];
    arr[(n-1)-i]=arr[i];
    arr[i]=temp;

  }
}

int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5,6,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  reverseArr(arr,n);

  for (size_t i = 0; i < n; i++) {
    printf("%d ",arr[i] );
    /* code */
  }
  return 0;
}
