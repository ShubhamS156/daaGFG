#include<iostream>
#include<stack>
#include<vector>
using namespace std;
/*
IDEA:
make left[] which contains the index of smaller element to the left
make right[] which contains the index of smaller element to the right
for index i arr[i] is the smallest element in window of size right[i]-left[i]-1;
make ans[] and init to zero. ans[i]=max(arr[i],ans[i]);
after this too some elements may be 0 
make them equal to the closest non zero element on the right
*/
 int * maxOfMin(int arr[],int n){
    int r[n+1]={0};
    int l[n+1]={0};
    stack<int> s;
    for(int i=0;i<n;i++){
        while(!s.empty() && arr[s.top()]>=arr[i])
            s.pop();    
        l[i]=s.empty()?-1:s.top();
        s.push(i);
    }
    while(!s.empty())
        s.pop();
    //emptied stack to build right array
    //to build right array use same logic as left array just iterate the array from end to beginning
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[s.top()]>=arr[i] )
            s.pop();
       r[i]=s.empty()?n:s.top();
       s.push(i); 

    }
    int ans[n+1]={0}; //ans[i] denotes max of min in window of length i
    for(int i=1;i<=n;i++){
        int length=r[i]-l[i]-1;
        ans[length]=max(ans[length],arr[i]);
    }
    for(int i=n-1;i>=1;i++){
        ans[i]=max(ans[i],ans[i+1]);
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
   int arr[]={10,20,50,30,40,70,30};
   int n=sizeof(arr)/sizeof(arr[0]) ;
   int* ans=maxOfMin(arr,n);
   for(int i=1;i<=n;i++)
    cout<<ans[i]<<" ";
    return 0;
}
