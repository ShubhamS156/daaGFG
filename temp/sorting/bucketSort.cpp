//bucket sort
//put elements in buckets sort individual bucket then put 'em again

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void bucketSort(int arr[],int n,int k){ //k is number of buckets to create
  int max=arr[0];

  for(int i=1;i<n;i++)
    if(arr[i]>max)
      max=arr[i];
  max++; //reason is if index is calculated for max element it comes out of bound
  std::vector<int> bkt[k];
  for(int i=0;i<n;i++){
    int bi=(k*arr[i])/max;
    bkt[bi].push_back(arr[i]);
  }
  for(int i=0;i<k;i++){
    sort(bkt[i].begin(),bkt[i].end());
  }
  int index=0;
  for(int i=0;i<k;i++){
    for(int j=0;j<bkt[i].size();j++){
      arr[index++]=bkt[i][j];
    }
  }

}
int main(int argc, char const *argv[]) {
  int arr[]={30,40,10,80,5,12,70};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k=4;
  bucketSort(arr,n,k);
  for(int i=0;i<n;i++){
   std::cout << arr[i] << '\t';
  }
  return 0;
}
