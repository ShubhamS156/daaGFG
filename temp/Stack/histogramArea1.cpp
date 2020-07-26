#include<iostream>
#include<stack>
using namespace std;
/*
IDEA: 
find the count of consecutive greater or equal elements to the right and left
NAIVE: go to left and goto right for each element 0(n^2)
Better: find the next and prev smaller elements then count the number of elements larger in betweeen by index

*/
int area(int arr[],int n){

}
int main(int argc, char const *argv[])
{
    int arr[]={6,2,5,4,1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<'\n'<<area(arr,n); 
    return 0;
}
