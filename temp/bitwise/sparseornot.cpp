#include <iostream>
using namespace std;


bool isSparse(int n){
int y=n&(n>>1);
    std::cout << "y is: "<<y << '\n';
    if(y){

    return false;
}
    return true;

}


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        if(isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;

    }
    return 0;
}  // } Driver Code Ends
