//lamuto partition
//o(n) & o(1)

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
  int j=0;
  for(int i=0;i<=h;i++){
    if( arr[i]<=p){
      swap(arr,i,j);
      j++;
    }

  }
  return j-1;
}
int main(int argc, char const *argv[]) {
  int arr[]={7,1,2,8,3,6,7,9,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int y=lamuto(arr,0,n-1);
  for(int i=0;i<n;i++){
  std::cout << arr[i] << '\t';
  }
  return 0;
}
