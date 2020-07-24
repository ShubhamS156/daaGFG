//Sum of natural numbers using recursion.
#include <stdio.h>
int sum(int n){
  if(n==1){
  return 1;
}
  return  sum(n-1)+n;
}
 int main(int argc, char const *argv[]) {
int n;
  printf("Enter a natural number:\n" );
  scanf("%d",&n );
  printf("Sum is: %d",sum(n) );
  return 0;
}
