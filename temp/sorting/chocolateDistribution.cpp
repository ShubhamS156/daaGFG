//chocolate distribution problem
//minimize the diff between max and min chocolates given
//m kids each get a packet
//give: arr of packet where each element denotes number of chocolates in that packet
//2 3 4 7 9 12 56
#include <iostream>
#include <algorithm>
using namespace std;
int min(int a,int b){
  return a<b?a:b;
}
int chocolate(int arr[],int n,int m){
  sort(arr,arr+n);
  int res=arr[m-1]-arr[0];
  for(int i=1;i+m-1<n;i++){
    int y=arr[i+m-1]-arr[i];
    std::cout << y << '\n';
    res=min(res,y);
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int arr[]={3,4,1,9,56,7,9,12};
  int n=sizeof(arr)/sizeof(arr[0]);
  int m=5;
  int y=chocolate(arr,n,m);
  std::cout << "Min diff is "<<y << '\n';
  return 0;
}
