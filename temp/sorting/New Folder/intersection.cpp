//intersection of 2 sorted arrays
#include<iostream>
using namespace std;

void intersectionOfSorted(int a[],int b[],int n1,int n2){
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(i>0 && a[i]==a[i-1]){
      i++;
      continue;
    }
    if(a[i]<b[j])
      i++;
    else if(a[i]>b[j])
      j++;
    else{
      std::cout << a[i] << '\n';
      i++;
      j++;
    }
  }

}

int main(int argc, char const *argv[]) {
  //int a[]={2,5,8,13,15};
  //int b[]{1,3,8,15,18,20,25};
  int a[]={1,1,3,3,3};
  int b[]={1,1,1,1,3,5,7};
  int n1=sizeof(a)/sizeof(a[0]);
  int n2=sizeof(b)/sizeof(b[0]);
  intersectionOfSorted(a,b,n1,n2);
  return 0;
}
