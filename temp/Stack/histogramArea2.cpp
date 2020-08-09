#include<iostream>
#include<stack>
using namespace std;

int area(int arr[],int n){
    int res=1;
    int curr;
    stack<int> st;
    for(int i=0;i<n;i++){
        while(st.empty()==false && arr[st.top()]>=arr[i]){ //falling in this condition means that ith element is next smaller for st.top()
            int tp=st.top();
            st.pop();
            curr=arr[tp]*(st.empty()?(i):(i-st.top()-1));
            cout<<"element: "<<arr[tp]<<" area: "<<curr<<endl;
            res=max(curr,res);
        }
        st.push(i);
    }
    //after the above loop the stack contains elements which dont have a next smaller element
    while(st.empty()==false){ //falling in this condition means that ith element is next smaller for st.top();
        int tp=st.top();
        st.pop();
        curr=arr[tp]*(st.empty()?(n):(n-st.top()-1));
        cout<<"element: "<<arr[tp]<<" area: "<<curr<<endl;
        res=max(res,curr);
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={6,2,5,4,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]) ;
    int x=area(arr,n);
    cout<<x; 
    return 0;
}
