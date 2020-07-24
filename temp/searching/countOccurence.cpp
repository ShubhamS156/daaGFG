#include<iostream>
using namespace std;
//leftmost
int left(int arr[],int l,int r,int x){
    int mid=l+(r-l)/2;
    if (l<=r)
    {
        
        if(arr[mid]==x && (x==0 || arr[mid-1]!=x)){
            return mid;
        }
        else if(arr[mid]>=x){
            return left(arr,l,mid-1,x);
        }
        else{
            return left(arr,mid+1,r,x);
        }
    }
    
    cout<<"left"<<endl;
    return mid;
    
   
}

int right(int arr[],int l,int r,int x){
    int mid=l+(r-l)/2;
    if(l<=r){
        
        if(arr[mid]==x && (mid==r || arr[mid+1]!=x)){
            return mid;
        }
        else if(arr[mid]<=x){
           return right(arr,mid+1,r,x);
        }
        else{
            return right(arr,l,mid-1,x);
        }
    }
    cout<<"right"<<endl;
    return mid;
}
void count(int arr[],int l,int r,int x){
    int a=left(arr,l,r,x);
    int b=right(arr,l,r,x);
    cout<<"Count: "<<b-a+1<<endl;
}
int main(int argc, char const *argv[])
{
    int arr[]={0,1,1,1,1,1};
    count(arr,0,5,1);
    return 0;
}
