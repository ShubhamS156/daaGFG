#include<iostream>
#include<stack>
using namespace std;
/* if current element is greater than top pop until top becomes greater
if stack becomes empty print -1*/

void prevGreater(int arr[],int n){
    stack<int> st;
    cout<<"-1 ";
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.empty()==false && arr[i]>=st.top()){
            st.pop();
        }
        int res=(st.empty())?(-1):(st.top());
        cout<<res<<" ";
        st.push(arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={15,10,18,12,4,6,2,8}; 
    //int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    prevGreater(arr,n);
    return 0;
}
