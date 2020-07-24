//merge sort full implementation
// mergeSort function calls merge function
//merge function merges 2 sorted arrays
//complexity:o(nlogn) o(n)
#include <iostream>
using namespace std;
int merge(int arr[], int l, int m, int r){

  int n1=m-l+1; //size of left array
  int n2=r-m; //size of right array

  int left[n1];
  int right[n2];

  for(int i=0;i<n1;i++){ //copying left array
    left[i]=arr[l+i];
  }
  for(int i=0;i<n2;i++){  //copying right array
    right[i]=arr[m+i+1];
  }
  //sorting left and right
int count=0;
int j=0;
int i=0;
int k=l;    // *important*
  while(i<n1 && j<n2){
    if(left[i]<=right[j]){
      arr[k++]=left[i++];
    }
    else{
      arr[k++]=right[j++];
      count=count+(n1-i);
    }
  }
  while(i<n1){
    arr[k++]=left[i++];

  }
  while(j<n2){
    arr[k++]=right[j++];

  }
  return count;

}

int mergeSort(int arr[],int l, int r){
  int m= l+(r-l)/2;
  int res=0;
  if(r>l){
    res+=mergeSort(arr,l,m);
    res+=mergeSort(arr,m+1,r);
    res+=merge(arr,l,m,r);
  }
  return res;
}

int main(int argc, char const *argv[]) {
  int arr[]={5,4,3,2,1};
  //int arr[]={2,4,1,3,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int y=mergeSort(arr,0,n-1);
  std::cout << "count inv: "<<y << '\n';
  return 0;
}
