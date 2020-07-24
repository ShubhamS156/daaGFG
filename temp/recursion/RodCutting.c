#include <stdio.h>

int max(int a,int b,int c){
  if(a>=b & a>=c)
  return a;
  else if(b>=a & b>=c)
  return b;
  else
  return c;
}
int maxCuts(int n,int a,int b,int c){
  if(n==0)
  return 0;
  if(n<0)
  return -1;
  int res= (max(maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)));
  if(res==-1)
  return -1;
  return res+1;
}
int main(int argc, char const *argv[]) {
  int n,a,b,c;
  printf("Enter rod length\n" );
  scanf("%d",&n );
  printf("Enter valid cuts: \n" );
  scanf("%d",&a );
  scanf("%d",&b );
  scanf("%d",&c );
  printf("Max cuts is: %d",maxCuts(n,a,b,c) );
    return 0;
}
