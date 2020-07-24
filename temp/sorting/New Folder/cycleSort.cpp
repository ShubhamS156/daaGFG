//cycle sort
//count number of elements smaller than each element and place them accordingly
#include <iostream>
using namespace std;
//swap function exists in std;
void cycleSort(int arr[],int n){
  for(int cs=0;cs<n-1;cs++){
    int item=arr[cs];
    int pos=cs;
    for(int i=cs+1;i<n;i++){
      if(arr[i]<item)
        pos++;
    }
      swap(item,arr[pos]);

    while(pos!=cs){
      pos=cs;
      for(int i=cs+1;i<n;i++){
        if(arr[i]<item)
          pos++;
      }
        swap(item,arr[pos]);
    }
  }
}
int main(int argc, char const *argv[]) {
  int arr[]={5,4,3,2,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  cycleSort(arr,n);
  for (int i = 0; i < n; i++) {
    /* code */
    std::cout << arr[i] << '\t';
  }
  return 0;
}
