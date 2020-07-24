#include <stdio.h>

void kthbitRS(int n,int k){
  int x=1;
  int y=(n>>(k-1))&1;
  if(y){
    printf("%d\n",y );
    printf("Yes\n" );
  }
  else{
    printf("No\n" );
  }
}
int main(int argc, char const *argv[]) {
  int n,k;
  printf("Enter a number: \n" );
  scanf("%d",&n );
  printf("\nEnter k\n" );
  scanf("%d",&k );
  kthbitRS(n,k);
  return 0;
}
