//max guests another approach
//see timeline
#include<iostream>
#include<algorithm>
using namespace std;

int max(int a,int b){
  return a>b?a:b;
}
int maxGuests(int arr[],int dep[],int n){
  sort(arr,arr+n);
  sort(dep,dep+n);
  int count=1,res=1;
  int j=0,i=1;
while(i<n && j<n){
  if(arr[i]<dep[j]){
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
  int arr[]{900,600,700};
  int dep[]={1000,800,730};
  int n=sizeof(arr)/sizeof(arr[0]);
  std::cout << "Max guest"<<maxGuests(arr,dep,n) << '\n';
  return 0;
}
