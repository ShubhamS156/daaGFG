#include <iostream>
using namespace std;

void  moves(int *m){
  cout<<*(m+1)<<'\n';
}
int main(int argc, char const *argv[]) {
  int x=5;
  //printf("%d\n",x );
  moves(&x);
  return 0;
}

