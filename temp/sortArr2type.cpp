 //sort -ve and +ve
 //using lamuto partition
 #include <iostream>
 using namespace std;
 void swap(int arr[],int i,int j){
   int temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
 }
 void segregatPN(int arr[],int n){
   int j=0;
   for(int i=0;i<n;i++){
      if(arr[i]<0){
        swap(arr,i,j);
        j++;
      }
   }
 }
 int main(int argc, char const *argv[]) {
   int arr[]={15,-3,-2,16,80,-9,9,-8};
   int n=sizeof(arr)/sizeof(arr[0]);
   segregatPN(arr,n);
   for (int i = 0; i < n; i++){
     std::cout << arr[i] << '\t';   }
   return 0;
 }
