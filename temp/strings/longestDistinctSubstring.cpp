#include<iostream>
using namespace std;
// Idea: increase count while distinct. If repition occurs find the prev index of the char and start from after it
// maxEnd stores the max length of substring ending with str[j] and having distinct elements
int longestDistinct(char arr[],int n){
    int start=0;
    int maxEnd;
    int res=0;
    int prev[256]={-1};
    for(int end=0;end<n;end++){
        start=max(start,prev[arr[end]]+1); //calculate starting of window. If current char occuring first time window length increases by 1 else start is updates
        int maxEnd=end-start+1; //calcualte length of substring ending with j and having all dsitinct elements
        res=max(res,maxEnd); //update res is maxEnd greater 
        prev[arr[end]]=end; //update the prev index of current char
    }
    return res;
}
int main(int argc, char const *argv[])
{
    char arr[]="abcdefabcefgh";
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestDistinct(arr,n-1);
    return 0;
}
