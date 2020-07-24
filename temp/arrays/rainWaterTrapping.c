#include <stdio.h>


int max(int a,int b){
  return a>b?a:b;
}

int min(int a,int b){
  return a<b?a:b;
}

int rainWaterCap(int arr[],int n){

int res=0;

  for(int i=1;i<n-1;i++){
    int lmax=arr[i];
    for(int j=0;j<i;j++)
      lmax=max(lmax,arr[j]);

int rmax=arr[i];
    for(int j=i+1;j<n;j++)
     rmax=max(rmax,arr[j]);

    res=res+(min(lmax,rmax)-arr[i]);
  }
return res;

}
int main(int argc, char const *argv[]) {
  int arr[]={4,0,6,2,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Max water stored is: %d\n",rainWaterCap(arr,n) );
  return 0;
}
