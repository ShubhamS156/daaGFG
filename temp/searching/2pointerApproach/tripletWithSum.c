//find a triplet with sum X
//2 pointer approach
#include <stdio.h>

void tripletWithSum(int arr[],int n,int sum){
  int temp;
  for(int i=0;i<n;i++){
    temp=sum-arr[i];
    int j=i+1,k=n-1;
    while(j<k){

      if(arr[j]+arr[k]==temp){
        printf("%d %d %d\n",arr[i],arr[j],arr[k] );
        break;
      }

      if(arr[j]+arr[k]<temp){
        j++;
      }

      else if (arr[j]+arr[k]>temp){
        k--;
      }


    }

  }
  printf("Reached end\n" );
}
int main(int argc, char const *argv[]) {
  int arr[]={1,2,34,1,42,4,41};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=47;
  tripletWithSum(arr,n,sum);
  return 0;
}
