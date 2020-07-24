#include <stdio.h>

int binarySearch(int arr[],int l,int h,int x){
  if(l>h)
    return -1;

  int mid= l+(h-l)/2;

  if(arr[mid]==x)
    return mid;

  if(arr[mid]>x)
    binarySearch(arr,l,mid-1,x);
  else
    binarySearch(arr,mid+1,h,x);

}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Element at index %d \n",binarySearch(arr,0,n-1,5) );
  return 0;
}
