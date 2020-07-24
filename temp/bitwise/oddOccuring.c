#include <stdio.h>

int oddOccuring(int arr[],int n){
  int x=0;
  for (size_t i = 0; i < n; i++) {
  x=x^arr[i];
  }
  return x;

}

int main(int argc, char const *argv[]) {
  int arr[]={1,1,2,2,2,3,3};
  printf("Odd occuring element is: %d\n",oddOccuring(arr,7) );
  return 0;
}
