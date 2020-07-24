//quick sort implementation
//worst case 0(n^2) average case o(nlogn)
#include <iostream>
using namespace std;

void  swap(int arr[],int i,int j){//swap 
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

int lpartition(int arr[],int l,int h){ //lamuto partition
  int p=arr[h];
  int j=l;
  for(int i=l;i<=h;i++){
    if(arr[i]<=p){
      swap(arr,i,j);
      j++;
    }
  }
  return j-1;
}

void qsort(int arr[],int l,int h){ //qsort recusrive function
  if(l<h){
    int p=lpartition(arr,l,h);
    qsort(arr,l,p-1);
    qsort(arr,p+1,h);
  }
}

int main(int argc, char const *argv[]) {
  int arr[]={4,4,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  qsort(arr,0,n-1);
  for (size_t i = 0; i < n; i++) {
    /* code */
    std::cout << arr[i] << '\t';
  }
  return 0;
}
