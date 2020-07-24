//approach is to count maximum number of overlaps by using mergeOverLappingIntervals.cpp
//another approach is to use timeline


#include <iostream>
#include<algorithm>
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

  int count=1 ;
  int temp=1;
  for(int i=1;i<n;i++){
    if(arr[i].s<=arr[res].e){
    arr[res].s=min(arr[res].s,arr[i].s);
    //  arr[res].s=arr[res].s;
      arr[res].e=max(arr[res].e,arr[i].e);
      ++temp;
      count=max(count,temp);
    }
    else{
      temp=1;
      res++;
      arr[res]=arr[i];
    }
  }
 for(int i=0;i<=res;i++){
    std:: cout<<arr[i].s<<" "<<arr[i].e<<'\n';
  }
  return count;
}
void maxGuests(int arr[],int dep[],int n){
  int y;
  //std::cout << y << '\n';
  range lap[n];
  int j=0;
  for(int i=0;i<n;i++){
  //  std::cout << "i:"<<i << '\n';
    //std::cout << arr[j] << " "<<dep[j]<<'\n';
    lap[i].s=arr[j];
    lap[i].e=dep[j];
    //sstd::cout << lap[i] << " "<<lap[i+1]<<'\n';

    ++j;
  }
  sort(lap,lap+n,comp);
  std::cout << "Max Guests: " <<mergeOverlapping(lap,n)<<'\n';

}
int main(int argc, char const *argv[]) {
//  int arr[]={900,940,950,1100,1500,1800};
//int dep[]={910,1200,1120,1130,1900,2000};
//int arr[]={900,940};
//int dep[]={1000,1030};
int arr[]={800,700,600,500};
int dep[]={840,820,830,530};
  int n=sizeof(arr)/sizeof(arr[0]);
maxGuests(arr,dep,n);
//  std::cout << "MaxGuests: " << maxGuests(arr,dep,n)<<'\n';


  return 0;
}
