//find pair in sorted  array  which gives sum X
//2 pointer approach
#include <stdio.h>

void pairOfSum(int arr[], int n,int sum){
  int i=0,j=n-1;
  while(i<j){

    if(arr[i]+arr[j]==sum){
      printf("%d %d\n",arr[i],arr[j]);
      break;
  }

    if(arr[i]+arr[j]<sum){
      i++;
    }
    else if(arr[i]+arr[j]>sum){
      j--;
    }
    if(i>j){
      printf("No such pair exists\n" );
    }
}
}

int main(int argc, char const *argv[]) {
  int arr[]={1,2,3,4,5,60};
  int n=sizeof(arr)/sizeof(arr[0]);
  pairOfSum(arr,n,7);
  return 0;
}
