//merge sort full implementation
// mergeSort function calls merge function
//merge function merges 2 sorted arrays
//complexity:o(nlogn) o(n)
#include <iostream>
using namespace std;
void merge(int arr[], int l, int m, int r){

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
int j=0;
int i=0;
int k=l;    // *important*
  while(i<n1 && j<n2){
    if(left[i]<=right[j]){
      arr[k++]=left[i++];
    }
    else{
      arr[k++]=right[j++];
    }
  }
  while(i<n1){
    arr[k++]=left[i++];

  }
  while(j<n2){
    arr[k++]=right[j++];

  }

}

void mergeSort(int arr[],int l, int r){
  int m= l+(r-l)/2;
  if(r>l){
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
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
