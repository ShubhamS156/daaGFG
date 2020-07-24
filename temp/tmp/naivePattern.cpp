#include<iostream>
using namespace std;
//idea: take the pattern and slide it across every window while matching.

void naive(char txt[],int n,char pat[],int m){
    bool flag=false;
    for(int i=0;i<=n-m;i++){ //for every window
        int j;
        for(j=0;j<m;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==m){
            flag=true;
            cout<<i<<" "<<endl;
        }

    }
    if(!flag){
        cout<<"not found"<<endl;
    }
}
int main(int argc, char const *argv[])
{
    char txt[]="ababbab";
    int n=sizeof(txt)/sizeof(txt[0])-1; //-1 beacause when char arr init using "" sentinel char  is added automatically
    char pat[]="ab";
    int m=sizeof(pat)/sizeof(pat[0])-1;
    naive(txt,n,pat,m);
    return 0;
}
