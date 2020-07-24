#include<stdio.h>


void reverse(int arr[],int l,int r){
    int temp;
 for(int i=l;i<=(l+r)/2;i++){
       temp=arr[i];
       arr[i]=arr[r+l-i];
       arr[r+l-i]=temp;
   }
}
void rotateArr(int arr[], int d, int n){

   reverse (arr,0,d-1);
   reverse (arr,d,n-1);
   reverse (arr,0,n-1);

}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int d=2;
  rotateArr(arr,d,n);
  for(int i=0;i<n;i++){
    printf("%d ",arr[i] );
  }

  return 0;
}
