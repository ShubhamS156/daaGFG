#include <stdio.h>
int max(int a,int b,int c){
  if(a>=b & a>=c)
  return a;
  else if(b>=a & b>=c)
  return b;
  else
  return c;
}
int main(int argc, char const *argv[]) {
  printf("%d\n",max(1,0,1) );
  for(int i=0;i<10;i++){
    printf("%d\n",i );
  }
  if(3>=3)
  printf("a\n" );
  return 0;
}
