//calculate max circular sub arr sum.

#include<stdio.h>

int min(int a, int b){
  return a<b?a:b;
}

int max(int a,int b){
  return a>b?a:b;
}
int circularSubArraySum(int arr[],int n){
  int res=arr[0];  // subarray sum if considering current element;
  int temp=arr[0]; //max  subarray sum yet.
  int minRes=arr[0];
  int minTemp=arr[0];
  for(int i=1;i<n;i++){
    res=max(res+arr[i],arr[i]);
    temp=max(temp,res);
    minRes=min(minRes+arr[i],arr[i]);
    minTemp=min(minTemp,minRes);
  }
  //here we calculated max sub array sum and stored it in temp;
  //to calculate max sub arr sum  in  circular arr we calculate minimum sum in normal arr and subtract it from sum of whole arr.
int sumOfArr=0;
for(int i=0;i<n;i++){
  sumOfArr+=arr[i];
}
  return max(temp,(sumOfArr-minTemp));

}

int main(int argc, char const *argv[]) {
  int arr[]={8,-4,3,-5,4};
  printf("Max sum is: %d \n", circularSubArraySum(arr,sizeof(arr)/sizeof(arr[0])));
  return 0;
}
