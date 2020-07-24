#include <stdio.h>

void lrotatebyD(int arr[],int n,int d){
  int temp[d];
  for(int i =0;i<d;i++)
    temp[i]=arr[i];

  for(int i=0;i<n-d;i++)
    arr[i]=arr[d+i];
int j=0;
  for(int i=d+1;i<n;i++)
  arr[i]=temp[j++];
}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  lrotatebyD(arr,n,2);
  for (size_t i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    /* code */
  }
  return 0;
}
