//stock buy and sell;

#include <stdio.h>

int maxProfit(int arr[],int n){
  int profit=0;
  for(int i=1;i<n;i++){
    if(arr[i]>arr[i-1]){
      profit=profit+(arr[i]-arr[i-1]);
    }
  }
  return profit;
}

int main(int argc, char const *argv[]) {
  int arr[]={1,5,3,8,12};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Max Profit is: %d",maxProfit(arr,n) );
  return 0;
}



6
82 15 91 91 58 27

Its Correct output is:
(1 3)

And Your Code's output is:
(1 32528)
