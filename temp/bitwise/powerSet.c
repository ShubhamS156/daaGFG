#include <stdio.h>
#include <string.h>
#include <math.h>
void findPowerSet(const char *arr){
  int n=strlen(arr);
  printf("%d\n",n );
  int powSize=8;
  for(int counter=0;counter<powSize;counter++){
    for(int j=0;j<n;j++){
int y=counter&(1<<j);
      if(y!=0){

      //printf("%d\n",y );
        printf("%c",*(arr+j) );
      }

    }
    printf("\n" );
  }
}

int main(int argc, char const *argv[]) {
  const char *arr="abc";
  findPowerSet(arr);
  return 0;
}
