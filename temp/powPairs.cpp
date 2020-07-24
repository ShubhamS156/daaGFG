#include<iostream>
using namespace std;
#include<algorithm>

long long countPairs(int x[], int y[], int n, int m)
{
   long res=0;
   sort(x,x+n);
   sort(y,y+m); //sorting arr y
int i=0,j=0; 
   while(i<n){
       if(j>=m){
           j=0;
           i++;
           continue;
       }
       if(x[i]==1){
           i++;
           j=0;
           continue;
       }
       if(y[j]==1){
           res++;
           j++;
           
       }
       if(x[i]==2 && y[j]>=5){
           res+=(m-j);
           i++;
           j=0;
       }
       else if ((x[i]==3 && y[j]<3) || (x[i]==3 && y[j]==4) )
       {   
           res++;
           j++;
       }
       else if (x[i]>=3 && y[j]>=5 && x[i]<y[i]  )
       {
           res+=(m-j);
           i++;
           j=0;
           
       }
       else
       {
           j++;
       }
       
      
       
   }
   return res;
   
}
int main(int argc, char const *argv[])
{
   // int x[]={1,2,3,4,5};
    //int y[]={1,2,3};
    int y[]={4,5,1};
    int x[]={2,3,4};
    int n=sizeof(x)/sizeof(x[0]);
    int m=sizeof(y)/sizeof(y[0]);
    cout<<"Pairs: "<<countPairs(x,y,n,m);
    return 0;
}
