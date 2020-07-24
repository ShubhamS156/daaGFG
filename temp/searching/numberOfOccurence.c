#include <stdio.h>
//ae toh tatti h n complexity o(n)   o(logn) solution== find leftmost index and rightmost index and do j-i+1
int binarySearch(int arr[],int l,int h,int x,int *pcount){

if(l>h)
  return -1;

  int mid= l+(h-l)/2;

  if(arr[mid]==x){
    printf("Cwas: %d\n",*(pcount) );
    *pcount=*pcount+1;
    printf("Cis:%d\n",*pcount );
}


  if(arr[mid]>=x)
    binarySearch(arr,l,mid-1,x,pcount);

  if(arr[mid]<=x){
    binarySearch(arr,mid+1,h,x,pcount);
}

}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,5,5,5,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=5;
  int count=0;
  binarySearch(arr,0,n-1,x,&count);
  printf("Element %d appears %d times \n",x,count );
  return 0;
}
