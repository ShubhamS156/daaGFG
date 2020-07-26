#include <iostream>
#include <stack>
using namespace std;
/*IDEA:
if encounter an elment which is smaller
than top then index - topIndex
if smaller than top..pop the stack until
top becomes big
*/
void stockSpan(int arr[], int n)
{
    cout<<"n is "<<n<<endl;
    stack<int> st;
    st.push(0);
    cout<<"1 ";
    for (int i = 1; i < n; i++)
   {
        while ( st.empty()==false && arr[i] >= arr[st.top()]){
          st.pop();
        }
        int span=(st.empty())?(i+1):(i-st.top());
        cout<<span<<" ";
        st.push(i);
        
    }
    

}
int main(int argc, char const *argv[])
{
    int arr[]={15,13,12,14,16,8,6,4,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    stockSpan(arr,n);
    return 0;
}


