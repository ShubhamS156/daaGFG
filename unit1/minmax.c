#include<stdio.h>

int max(int a ,int b){
  return (a>b)?a:b;
}
int min(int a ,int b){
  return (a<b)?a:b;
}
int maximum(int arr[],int p,int r){
  if(r-p<=1)
  return max(arr[r],arr[p]);

  return max(maximum(arr,p,(p+r)/2),maximum(arr,(p+r)/2+1,r));
}


int minimum(int arr[],int p,int r){
  if(r-p<=1)
  return min(arr[r],arr[p]);

  return min(minimum(arr,p,(p+r)/2),minimum(arr,(p+r)/2+1,r));
}

int main(int argc, char const *argv[]) {
  int arr[6]={1,1,1,1,1,1};
  int n=6;
 printf("Max: %d\n",maximum(arr,0,n-1));
 printf("Min: %d\n",minimum(arr,0,n-1) );
  return 0;
}
