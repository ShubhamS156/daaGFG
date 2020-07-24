#include <stdio.h>


//function returns the index of the surviving person.
int jos(int n,int k){
if(n==1)
return 0;
  return (jos(n-1,k)+k)%n;
}

int main(int argc, char const *argv[]) {
int n,k;
  printf("Enter number\n" );
  scanf("%d",&n );
  printf("Enter k\n" );
  scanf("%d",&k );
  printf("Survivor is: %d\n",jos(n,k) );
  
  return 0;
}
