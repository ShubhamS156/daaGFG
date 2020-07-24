#include <iostream>
using namespace std;
int posOfRightMostDiffBit(int m, int n){

   int k=0;
   int y=m^n;
  // printf(":%d\n",y );
   y=y&(~(y-1));
//printf(":%d\n",y );
   while(y!=0){
       y=y/2;
       k++;
   }


if(m==n)
return -1;
return k;
}

int main()
{
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         cout << posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;
}   // } Driver Code Ends
