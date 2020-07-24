//find the Kth smallest element
#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
 }
int lamuto(int arr[],int l,int h){
  int p=arr[h];  //to handle cases when pivot is not the last element
//  swap(arr,index,h);// make pivot  last element and proceed normally
  int j=l;
  for(int i=l;i<=h;i++){
    if( arr[i]<=p){
      swap(arr,i,j);
      j++;
    }

  }
  return j-1;
}

int kthsmallest(int arr[],int l,int h,int k){
  while(l<=h){
    int m=lamuto(arr,l,h);
    std::cout << "j is: "<<m << '\n';
    if(m==k-1)
      return arr[m];
    else if(m<k-1)
      l=m+1;
    else
      h=m-1;
  }
return -1;
}
int main(int argc, char const *argv[]) {
  int arr[]={7,10,4,15,20};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  std::cout << kthsmallest(arr,0,n-1,k) << '\n';

  return 0;
}
