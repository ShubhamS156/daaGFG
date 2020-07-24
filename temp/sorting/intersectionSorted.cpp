#include <iostream>
using namespace std;

void intersectionOfSortedArr(int a[],int n1,int b[],int n2){
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(i>0 && a[i-1]==a[i]){
      i++;
      continue;
    }
    if(a[i]<b[j])
      i++;
    else if(a[i]>b[j])
      j++;
    else{
      std::cout << a[i] << "  ";
      i++;
      j++;
    }
  }
}
int main(int argc, char const *argv[]) {
  int a[]={3,5,10,10,10,15,18,18,20,30};
  int b[]={5,5,8,10,10,18,30};
  int n1=sizeof(a)/sizeof(a[0]);
  int n2=sizeof(b)/sizeof(b[0]);
  intersectionOfSortedArr(a,n1,b,n2);
  return 0;
}
