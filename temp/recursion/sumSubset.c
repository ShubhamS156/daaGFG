#include <stdio.h>

int sumSubset(int arr[], int n, int sum){
  if(n==0)
  return (sum==0)?1:0;
  return sumSubset(arr,n-1,sum-arr[n-1])+sumSubset(arr,n-1,sum);
}

int main(int argc, char const *argv[]) {
int n=3;
int sum;
int arr[3]={10,20,15};
  printf("Enter sum to find\n");
  scanf("%d",&sum);
  printf(":: %d\n",sumSubset(arr,n,sum));

  return 0;
}
