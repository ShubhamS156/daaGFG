//Find maximum consecutive ones in a bool array
#include <stdio.h>
#include <stdbool.h>
int max(int a ,int b){
  return a>b?a:b;
}
int maxConsecutiveOnes(bool arr[],int n){
  int temp=0;
  int res=0;
  for(int i=0;i<n;i++){
    if(arr[i]){
      res++;
      temp=max(res,temp);
      printf("tmp=%d res=%d\n",temp,res );
    }
    else res=0;
  }
  return temp;
}

int main(int argc, char const *argv[]) {
  bool arr[]={1,0,1,1,1,1,0,1,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Max Consecutive Ones are: %d \n",maxConsecutiveOnes(arr,n) );
  return 0;
}
