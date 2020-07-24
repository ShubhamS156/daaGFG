//union of two sorted arrays
#include<iostream>
using namespace std;

void unionOfSortedArr(int a[],int b[],int n1,int n2){
  int i=0,j=0;

  while(i<n1 && j<n2){

    if(i>0 && a[i-1]==a[i]){
      i++;
      continue;
    }

    if(j>0 && b[j]==b[j-1]){
      j++;
      continue;
    }

    if(a[i]<b[j]){
      //  std::cout << "ashu" << '\n';
      std::cout << a[i++] << '\t';
    }
    else if(a[i]>b[j]){
      std::cout << b[j++] << '\t';
    }
    else{
      std::cout << a[i++] << '\t';
      j++;
    }
  }
  while(i<n1){
    if(i==0 || a[i-1]!=a[i]){
      std::cout << a[i] << '\t';
    }
    i++;
  }
  while(j<n2){
    if(j==0 || b[j-1]!=b[j]){
      std::cout << b[j] << '\t';
    }
    j++;
  }
}
int main(int argc, char const *argv[]) {
  //int a[]={3,8,10};
  //int b[]={2,8,9,10,15};
  int a[]={2,3,3,3,4};
  int b[]={4,4};
  int n1=sizeof(a)/sizeof(a[0]);
  int n2=sizeof(b)/sizeof(b[0]);
  unionOfSortedArr(a,b,n1,n2);
  return 0;
}
