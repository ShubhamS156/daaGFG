//majority element in array
//moore's voting algorithm
#include <stdio.h>
int findMajority(int arr[], int n){
  int res=0;
  int count=1;
  for(int i=1; i<n;i++){
    if(arr[res]==arr[i]){
      count++;
    }
    else count--;
    if(count==0){
      res=i;
      count=1;
    }
  }
  count=0;
  for(int i=0; i<n;i++){
    if(arr[res]==arr[i])
      count++;

    if(count>n/2)
      return i;
  }
  return -1;
}
int main(int argc, char const *argv[]) {
  int arr[]={6,6,61,1,16,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  printf("Majority element is %d and at index %d\n",arr[findMajority(arr,n)],findMajority(arr,n));
  return 0;
}
