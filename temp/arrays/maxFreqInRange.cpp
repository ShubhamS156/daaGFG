#include <iostream>
#include <vector>
using namespace std;

int maxFreqInRange(int l[],int r[],int n){
  vector<int> arr[1000]; //max constraint on values in l[],r[].
  for(int i=0;i<n;i++){
    arr[l[i]]+=1;
    arr[r[i]+1]-=1;
  }
  int maxm=arr[0],res=0;
  for(int i=1;i<1000;i++){
    arr[i]+=arr[i-1];
    if(maxm<arr[i]){
      maxm=arr[i];
      res=i;
    }
  }
  return res;
}
int main(int argc, char const *argv[]) {
  int l[]={1,2,3};
  int r[]={3,5,7};
  int n=sizeof(l)/sizeof(l[0]);
cout<<"Max occuring element is "<<maxFreqInRange(l,r,n);
  return 0;
}
