//quicksort using hoare partition
#include<iostream>
using namespace std;
//4 5 2 6 1 3
//after code runs j marks the index after which  elements greater than or equal to pivot lies
int partition(int arr[],int l,int h){
    int i=l-1,j=h+1;
    int p=arr[l]; //4
    while(true){
        do
        {
            i++;
        } while (arr[i]<p);
        
        do
        {
            j--;
        } while (arr[j]>p);

        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
        
    }
}
void quick(int arr[],int l,int h){
    if(l<h){
        int m=partition(arr,l,h);
        quick(arr,l,m);
        quick(arr,m+1,h);
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={4,1,5,6,3,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
