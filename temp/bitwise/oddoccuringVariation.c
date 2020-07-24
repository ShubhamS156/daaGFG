//arr[n] range n+1 ..find the missing number.

#include <stdio.h>
int variation(int arr[], int n){
  int tmp=0;
    for(int i=0;i<n;i++){
      tmp=tmp^arr[i];
    }
    for(int j=1;j<=n+1;j++){
      printf("%d\n",tmp );
      tmp=tmp^j;
    }
    return tmp;
}

int main(int argc, char const *argv[]) {
  int arr[4]={1,2,4,5};
  int res=variation(arr,4);
  printf("missing number is %d \n",res );
  return 0;
}
