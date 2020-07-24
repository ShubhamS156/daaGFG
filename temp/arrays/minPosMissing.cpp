
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) {
   int j=-1;
   for(int i=0;i<n;i++){
       if(arr[i]>0){
        j++;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
   }
   int posEnd=j;
   cout<<"j is: "<<j<<'\n';
  //marking elements
 for(int i=0;i<=posEnd;i++){
     int temp=abs(arr[i])-1;
     cout<<"Tmp: "<<temp<<'\n';
     if(temp<=posEnd){
         if(arr[temp]>0){
             arr[temp]=-1*arr[temp];
         }
     }
 }
 //searching for non negative numbers
 for(int i=0;i<=posEnd;i++){
     if(arr[i]>0){
         return i+1;
     }

 }

    return posEnd+2;
}
int missingNumber(int arr[], int n);
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0;
  }
