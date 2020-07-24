#include <stdio.h>

//using binary search getting the first occurence of x in logN time
int binarySearch(int arr[],int l,int h,int x){
  if(l>h)
    return -1;

  int mid= l+(h-l)/2;

  if(arr[mid]==x && (mid==0 || arr[mid-1]!=x)) //if both mid==0 and arr[mid-1]!=x fails then mid is not first occurence
    return mid;



  if(arr[mid]>=x) //equals to because mid is not left most occurence and the number just before  mid can be x
    binarySearch(arr,l,mid-1,x);
  else
    binarySearch(arr,mid+1,h,x);

}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,5,5,5,6,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Element at index %d \n",binarySearch(arr,0,n-1,5) );
  return 0;
}
