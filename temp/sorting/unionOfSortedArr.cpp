// union of 2 sorted arrays
//using merge sort technique
#include <iostream>
using namespace std;
void unionOfSortedArr(int a[],int n1,int b[], int n2){
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(i>0 && a[i-1]==a[i]){
    i++;
      continue;
    }
    if(j>0 && b[j-1]==b[j]){
      j++;
      continue;
    }
    if(b[j]<a[i]){
      std::cout << b[j] << " ";
      j++;
    }

    else if(a[i]<b[j]){
    std::cout << a[i] << " ";
    i++;
    }

    else{
      std::cout << a[i] << " ";
      i++;
      j++;
    }

  }

  while(i<n1){
    if(i==0 || a[i]!=a[i-1]){  //kab  kab bache hue elements print karne h
    std::cout << a[i] << " ";
  }
    i++;


  }

  while(j<n2){
  if(j==0 || b[j-1]!=b[j]){
    std::cout << b[j] << " ";
  }
    j++;
}
}

int main(int argc, char const *argv[]) {
  //int a[]={2,3,4,6,8};
  int a[]={3,8,8};
  int b[]={2,8,8,9,10,15};
  int n1=sizeof(a)/sizeof(a[0]);
  //int b[]={2,3,4};
  int n2=sizeof(b)/sizeof(b[0]);
  unionOfSortedArr(a,n1,b,n2);
  return 0;
}
