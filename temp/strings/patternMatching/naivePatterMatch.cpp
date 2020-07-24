#include<iostream>
using namespace std;
//IDEA: for pattern of length m and text of length n there will be n-m+1 windows. For each window check if //////pattern matches.Print index whenever u see a pattern if not present at all print not found
// abcdabcd
//abcd
void naive(char text[],char pat[],int n,int m){
    bool flag=false;
    for(int i=0;i+m<=n;i++){ //thin about i+m<=n
        int j;
        for(j=0;j<m;j++){
            if(text[j+i]!=pat[j])
                break; 
        }
        if(j==m){
            cout<<i<<" ";
            flag=true;
        }
    }
    if(!flag){
        cout<<"Not found";
    }
}
int main(int argc, char const *argv[])
{
    char text[]="ABABBAB";
    int n=sizeof(text)/sizeof(text[0])-1;
    char pat[]="AB";
    int m=sizeof(pat)/sizeof(pat[0])-1;
    naive(text,pat,n,m);
    return 0;
}
