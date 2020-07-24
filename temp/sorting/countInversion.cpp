//return number of count inversions
// count inversion: if i<j but arr[i]>arr[j]
//idea: use insertion sort
//better idea: use merge sort
#include <iostream>
using namespace std;
int merge(int arr[],int l,int m,int r){
  int res=0;
  int n1=m-l+1;
  int n2=r-m;
  int i,j,k;
  int L[n1],R[n2];
  for(i=0;i<n1;i++){
    L[i]=arr[l+i];
  }
  for(j=0;j<n2;j++){
    R[j]=arr[m+1+j];
  }

  i=0;
  j=0;
  k=l;

  while(i<n1 && j<n2){
    if(L[i]>R[j]){
      res=res+(n1-i);
      arr[k++]=R[j++];
    }
    else if(L[i]<=R[j]){
      arr[k++]=L[i++];
    }

  }
  while(i<n1){
    arr[k++]=L[i++];
  }
  while(j<n2){
    arr[k++]=R[j++];
  }
  return res;
}
int countInversion(int arr[],int l,int r){  //similar to mergeSort function
int res=0;
   if(l<r){
     int m=l+(r-l)/2;
     res+=countInversion(arr,l,m);
     res+=countInversion(arr,m+1,r);
     res+=merge(arr,l,m,r);
   }
   return res;
}
int main(int argc, char const *argv[]) {
  //int arr[]={5,4,3,2,1};
  int arr[]={5,4,1,3,2};

  int n=sizeof(arr)/sizeof(arr[0]);
  std::cout << "Count Inversions: "<<" \n" << countInversion(arr,0,n-1)<< '\n';
  return 0;
}
