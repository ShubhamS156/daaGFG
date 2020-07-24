#include <stdio.h>

void powOf2(int n){
  //calculate no of set bits
  if(n>1){
  int setBit=0;
  while(n>0){
    n=n&(n-1);
    setBit++;
  }
  printf("Set Bits: %d\n",setBit );
  if(setBit==1 ){
    printf("Yes pow of 2\n" );
  }
  else{
    printf("No\n" );
  }
}
else{
  printf("No\n" );
}
}
int main(int argc, char const *argv[]) {
int n;
printf("Enter number\n" );
scanf("%d", &n);
powOf2(n);
  return 0;
}
