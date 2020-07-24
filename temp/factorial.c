// Finding factorial using recursion
#include <stdio.h>

int factorial(int n){
  if(n==0){
    return 1;
  }
  else if (n==1){
    return 1;
  }

  return factorial(n-1)*n;
}
int main(int argc, char const *argv[]) {

int n;
  printf("Enter a number: \n" );
  scanf("%d",&n );
  printf("Factorial is: %d",factorial(n) );
  return 0;
}
