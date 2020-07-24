#include <iostream>
using namespace std;

void cycleSortDistinct(int arr[],int n){
    for(int cs=0;cs<n-1;cs++){
      int pos=cs;
      int item=arr[cs];
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
  int arr[]={20,40,50,10,30};
  int n=sizeof(arr)/sizeof(arr[0]);
  cycleSortDistinct(arr,n);
  for (size_t i = 0; i < n; i++) {
 std::cout << arr[i] << '\t';    /* code */
  }
  return 0;
}
