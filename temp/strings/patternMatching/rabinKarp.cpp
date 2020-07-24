#include<iostream>
using namespace std;

//worst case o((n-m+1)*m)
//IDEA: calculate hash of the pattern. Then calculate hash of every window using rolling hash
//keep comparing the hash. If hash matches confirm that its not a superious hit by matching the pattern to window

void karp(char text[],int n,char pat[],int m){
    //First step: Calculate d^(m-1)%q 
    int h=1,q=7,d=5;
    for(int i=1;i<=m-1;i++)
        h=(h*d)%q;
    //h now holds d^(m-1)%q

    //Second step: Calculate hash of 1st window and pattern;
    int t=0,p=0; //t is hash of window and p of pattern
    for(int i=0;i<m;i++){
        t=(t*d+text[i])%q;
        p=(p*d+pat[i])%q;
    }

    //Third step: Check if both hash matches
    bool flag=false;
    for(int i=0;i<=n-m;i++){
        if(t==p){ //if hash matches
        int j;
            for(j=0;j<m;j++){
                if(text[i+j]!=pat[j])
                    break;
            }
            if(j==m){
                flag=true;
                cout<<i<<" ";
            }
        }
        if(i<n-m) {//if windows left
            t=(d*(t-text[i]*h)+text[i+m])%q;
        }
        if(t<0)
            t+=q;
    }
    if(!flag)
        cout<<"Not found"<<endl;

}
int main(int argc, char const *argv[])
{
    char text[]="ABCABCD";
    int n=sizeof(text)/sizeof(text[0])-1;
    char pat[]="ABCD";
    int m=sizeof(pat)/sizeof(pat[0])-1;
    karp(text,n,pat,m);
    return 0;
}
