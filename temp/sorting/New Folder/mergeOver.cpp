//merge overlapping intervals
//res is the index till which we have unique intervals after the array is processed i.e. res is result array

#include <iostream>
#include <algorithm>
using namespace std;

typedef struct interval{
  int s;
  int e;
}interval;

int max(int a,int b){
  return a>b?a:b;
}
int min(int a,int b){
  return a<b?a:b;
}

bool comp(interval a,interval b){
  return a.s<b.s;
}

void mergeOverlapping(interval arr[],int n){
  int res=0;
  for(int i=1;i<n;i++){
    if(arr[i].s<=arr[res].e){
      arr[res].s=min(arr[i].s,arr[res].s);
      arr[res].e=max(arr[i].e,arr[res].e);
    }
    else{
      res++;
      arr[res]=arr[i];
    }
  }
  for (int i = 0; i<=res; i++) {
    /* code */
    std::cout << arr[i].s<<" "<<arr[i].e << '\t';
  }
}
int main(int argc, char const *argv[]) {
  interval arr[]={{1,3},{2,4},{5,7},{6,8}};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n,comp);
  mergeOverlapping(arr,n);
  return 0;
}
