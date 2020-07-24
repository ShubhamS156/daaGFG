#include <stdio.h>

int sumOfNumber(int n){
  if(n==0)
  return 0;
int sum=n%10;
  return sum+sumOfNumber(n/10);
}
int main(int argc, char const *argv[]) {
int n;
printf("Enter number to calculate sum of digits\n" );
scanf("%d",&n );
printf("Sum is: %d\n", sumOfNumber(n));
  return 0;
}
