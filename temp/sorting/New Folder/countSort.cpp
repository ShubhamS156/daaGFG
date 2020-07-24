//make a count array of size k
//fill it by using index of arr as element
//count array now denotes number of times each index occurs
//take prefix sum. each element of count array now denotes number of element smaller or equal to its index
//make a output array
//k is range of elements ...0 to k-1
#include <iostream>
using namespace std;

void CountSort(int arr[],int n,int k){
  int count[k];
  for (int i = 0; i < k; i++) {
    count[i]=0;
  }
  for(int i=0;i<n;i++){   //using index as element
    count[arr[i]]++;
  }

  for (int i = 1; i < k; i++) { //prefix sum
    count[i]=count[i]+count[i-1];
    //std::cout << count[i] << '\t';
  }

  int output[n];

  for(int i=n-1;i>=0;i--){

    output[count[arr[i]]-1]=arr[i];

    count[arr[i]]--;

  }
  for(int i=0;i<n;i++){
    arr[i]=output[i];
  }


}
int main(int argc, char const *argv[]) {
  int arr[]={1,4,4,1,0,1,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=5;
  CountSort(arr,n,k);
  for(int i=0;i<n;i++){
    std::cout << arr[i] << '\t';
  }
  return 0;
}
