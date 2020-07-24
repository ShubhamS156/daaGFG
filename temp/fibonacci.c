//Finds the Nth Fibonacci number

#include <stdio.h>

int fib(int n){
  if(n==0)
  return 0;
  else if(n==1)
  return 1;
   return fib(n-1)+fib(n-2);
}

int main(int argc, char const *argv[]) {
  int n;
  printf("Enter number:\n" );
  scanf("%d",&n );
  printf("%dth Fibonacci Number is: %d",n,fib(n) );
  return 0;
}
