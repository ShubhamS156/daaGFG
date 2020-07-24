#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void primeDigit(int N){
  int len;
  int temp=N;
  int i=1;
  int h=pow(4,i);
  while(temp>h){
    temp=temp-h;
    h=pow(4,++i);
  }
  len=i;

  char array[4]={'2','3','5','7'};

  for(int j=1;j<=len;j++){
    int cases=0;
    int index=0;
    cases=pow(4,len-j);
    while(cases<temp){
      index++;
      temp=temp-cases;
    }
cout<<" "<<array[index];

}

}
int main(int argc, char const *argv[]) {
  int n;

  cout<<"Enter n: \n";
  cin>>n;
  primeDigit(n);
  return 0;
}
