#include <stdio.h>

int peakFinder(int arr[],int l,int r){
int mid=(l+r)/2;
//printf("l is-----%d r is--------%d mid is-----%d\n",l,r, mid);
//printf("arr[mid]=%d arr[mid+1]=%d\n",arr[mid],arr[mid+1] );
  if(arr[mid]<arr[mid+1]){

    peakFinder(arr,mid+1,r);

}

  else if(arr[mid]<arr[mid-1]){

    peakFinder(arr,l,mid-1);
  }

  else return arr[mid];
}

int main(int argc, char const *argv[]) {
  int l=0,r;
  int arr[]={1,4,2,5,6,7,8,9}; //8
  int n=sizeof(arr)/sizeof(arr[0]);
  r=n-1;
  printf("Peak is: %d",peakFinder(arr,l,r) );
  return 0;
}
