#include <stdio.h>

void toh(int n,char a,char b,char c){
  if(n==1){
  printf("Move 1 from %c to %c\n",a,c );
  return;
}

  toh(n-1,a,c,b);
  printf("Move %d from %c to %c\n",n,a,c );
  toh(n-1,b,a,c);
}

int main(int argc, char const *argv[]) {
  int n=20;
  toh(n,'a','b','c');
  return 0;
}
