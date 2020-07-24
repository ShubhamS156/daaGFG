//remove building such that max water can be trapped
#include<iostream>
using namespace std;

int maxWater(int arr[],int n){
    if(n<=2)
        return 0;
    
    int j=0,k=n-1;
   int res=min(arr[k],arr[j])*(k-j-1);
   int tmp;
    while(j<k){
        tmp=min(arr[k],arr[j])*(k-j-1);
        res=max(res,tmp);

        if(arr[j]<arr[k]){
            j++;
        }
        else{
            k--;
        }

    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]{2,1,3,4,6,5};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"Max paani: "<<maxWater(arr,n);
    return 0;
}
