#include <stdio.h>
#include <stdbool.h>
void kbitSet(int n,int k){
  int x =1;
  int y=n&((x<<(k-1)));

  if(y!=0){
    printf("%d\n", n&((x<<(k-1))));
    printf("Yes\n" );
  }
  else{
    printf("No" );
  }

}

int main(int argc, char const *argv[]) {
  int n,k;
  printf("Enter a number: \n" );
  scanf("%d",&n );
  printf("\nEnter k\n" );
  scanf("%d",&k );
  kbitSet(n,k);
  return 0;
}
