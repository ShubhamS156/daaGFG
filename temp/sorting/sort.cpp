 #include <iostream>
 #include <algorithm>

 using namespace std;
bool cmp(int &a,int &b){
  return a>b; //reverse sign for ascending order
}
 int main(int argc, char const *argv[]) {
   int arr[]={5,4,3,2,1,0};
   int n=sizeof(arr)/sizeof(arr[0]);
   sort(arr,arr+n,cmp);
   for(int i=0;i<n;i++){
   std::cout << arr[i] << '\t';
 }
   return 0;
 }
