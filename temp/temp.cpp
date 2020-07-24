#include<iostream>
#include <algorithm>
using namespace std;

int max(int a,int b){
  return a>b?a:b;

}

int maxGuests(int arr[],int dep[],int n){
  sort(arr,arr+n);
  sort(dep,dep+n);
  int res=1,count=1,i=1,j=0;
  while(i<n && j<n){
    if(arr[i]<=dep[j]){
      count++;
      i++;
    }
    else{
      count--;
      j++;
    }
    res=max(res,count);
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int arr[]={600,700,800};
  int dep[]={630,830,900};
  int n=sizeof(arr)/sizeof(arr[0]);
  std::cout << "Max guests: "<<maxGuests(arr,dep,n) << '\n';

  return 0;
}
