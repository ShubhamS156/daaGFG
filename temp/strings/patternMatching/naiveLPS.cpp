#include<iostream>
using namespace std;
//IDEA: for each index of lps arr call function in which it checks for every length possible for given length.
//o(n^3)
int lpsCal(char txt[],int n){
    for(int len=n-1;len>0;len--){
            bool flag=true;
        for(int i=0;i<len;i++){
            if(txt[i]!=txt[n-len+i])   //whole logic
                flag=false;
        }
        if(flag==true)
            return len;
    }
    return 0;
}
void fillLps(char txt[],int lps[],int n){
    for(int i=0;i<n;i++){
        lps[i]=lpsCal(txt,i+1);
    }
}
int main(int argc, char const *argv[])
{
    char txt[]="ababacab";
    int n=sizeof(txt)/sizeof(txt[0]);
    int lps[n-1];
    fillLps(txt,lps,n-1);
    for(int i=0;i<n-1;i++){
        cout<<lps[i]<<" ";
    }
    return 0;
}
