#include <iostream>
#include <algorithm>

using namespace std;

int max(int a,int b){
  return a>b?a:b;
}

int min(int a,int b){
  return a<b?a:b;
}


typedef struct range{
  int s;
  int e;
}range;

bool comp(range a,range b){
  return a.s<b.s;
}

int mergeOverlapping(range arr[],int n){
  int res=0;
  int count=1;
  int tmp=1;
  for(int i=1;i<n;i++){
    if(arr[i].s<=arr[res].e){
    arr[res].s=min(arr[res].s,arr[i].s);
    //  arr[res].s=arr[res].s;
      arr[res].e=max(arr[res].e,arr[i].e);
      count++;
      tmp=max(tmp,count);
    }
    else{
      res++;
      count=1  ;
      arr[res]=arr[i];
    }
  }
  for(int i=0;i<=res;i++){
    std:: cout<<arr[i].s<<" "<<arr[i].e<<'\n';
  }
  return tmp;
}


int main(int argc, char const *argv[]) {

  //  range arr[]={{7,9},{6,10},{4,5},{1,3},{2,4}};
range arr[]={{900,910},{940,1200},{950,1120},{1100,1130},{1500,1900},{1800,2000}};
  int n=sizeof(arr)/sizeof(arr[0]);

  sort(arr,arr+n,comp);
  cout<<"Max Guests: "<<mergeOverlapping(arr,n)<<'\n';
  //for(int i=0;i<n;i++){
    //printf(":%d %d:\n",arr[i].s,arr[i].e );
  //}
  //printf("%d\n",arr[1].s );
  return 0;
}
