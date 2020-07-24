//merge sort implementation
//keep dividing the array into halves
//merge the sorted halves
#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
  int n1=m-l+1;
  int n2=r-m;
  int L[n1];
  int R[n2];

  //copying fist half of array in L[] and other half in R[]
  int i=0;
  int j=0;
  int k=0;
  for(i=0;i<n1;i++){
    L[i]=arr[l+i];

  }
  for(i=0;i<n2;i++){
    R[i]=arr[m+1+i];
  }

  //now merging the sorted arrays
  i=0;k=l;j=0;    //k=l i.e. start of the array for this subarray
  while(i<n1 && j<n2){
    if(L[i]<=R[j]){
      arr[k++]=L[i++];
    }
    else{
      arr[k++]=R[j++];
    }
  }
  while(i<n1){
    arr[k++]=L[i++];
  }
  while(j<n2){
    arr[k++]=R[j++];
  }
}

void mergeSort(int arr[],int l,int r){
  if(l<r){
    int mid= l+(r-l)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
  }
}
int main(int argc, char const *argv[]) {
  int arr[]={5,4,3,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  mergeSort(arr,0,n-1);
  for(int i=0;i<n;i++){
    std::cout << arr[i] << '\t';
  }
  return 0;
}
