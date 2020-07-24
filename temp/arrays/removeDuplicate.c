#include<stdio.h>

int remDuplicate(int arr[],int n){
int res=1;

  for(int i=1;i<n;i++){
    if(arr[i]!=arr[res-1]){
      arr[res]=arr[i];
      res++;
    }

  }
return res;

  }

int main(int argc, char const *argv[]) {
  int arr[]={10,10,20,20,20,30,30,30,30};
  int n=sizeof(arr)/sizeof(arr[0]);
  int size=remDuplicate(arr,n);
  printf("%d\n",size );
  for(int i=0;i<n;i++){
    printf("%d ", arr[i]);
  }

  return 0;
}
