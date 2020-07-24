#include <stdio.h>

void leaderInArray(int arr[],int n){
  int lastLeader=arr[n-1];
  printf("Leader = %d ",lastLeader );
  for(int i=n-2;i>=0;i--){
    if(arr[i]>lastLeader){
    lastLeader=arr[i];
    printf("%d ",lastLeader );
  }
  }
}
int main(int argc, char const *argv[]) {
  int arr[]={7,10,4,3,6,5,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  leaderInArray(arr,n);
  return 0;
}
