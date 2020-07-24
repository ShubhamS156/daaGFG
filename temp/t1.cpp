#include <iostream>
#include <vector>
using namespace std;
void threeway(int A[],int n,int a,int b){

  int low=0,mid=0,hi=n-1;
   while(mid<=hi){
       if(A[mid]<a){
           swap(A[mid],A[low]);
           mid++;
           low++;
       }
       else if(A[mid]>b){
           swap(A[mid],A[hi]);
           hi--;
       }
       else{
           mid++;
       }
   }
}
int main(int argc, char const *argv[]) {
int A[]={2,8,6,9,4,5,5,50,90};
vector<int> v;
v.push_back(1);
v.push_back(2);
std::cout << v[40] << '\n';
std::cout << v.size() << '\n';
int n=sizeof(A)/sizeof(A[0]);
int a=5;
int b=8;
threeway(A,n,a,b);
for(int i=0;i<n;i++){
  std::cout << A[i] << '\t';
}
  return 0;
}
