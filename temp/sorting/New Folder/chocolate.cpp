//minimise the difference between max and min chocolate a  child gets.
//one box per child
#include <iostream>
#include <algorithm>
using namespace std;
int min(int a,int b){
  return a<b?a:b;
}
int chocolate(int arr[],int n,int m){
  sort(arr,arr+n);
  int res=arr[m-1]-arr[0];
  for(int i=0;i+m-1<n;i++){
    res=min(res,arr[m+i-1]-arr[i]);
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int arr[]{7,3,1,4,9,12,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  int m=3;
  std::cout << chocolate(arr,n,m) << '\n';
  return 0;
}
