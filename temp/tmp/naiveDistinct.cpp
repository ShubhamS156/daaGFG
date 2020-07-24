#include<iostream>
using namespace std;
//IDEA; when distinct skip to the window for which mismatch occured coz before it all matched and moving just to the next window will not
//give matches as they are ditinct amongst themselves

void naiveD(char txt[],int n,char pat[],int m){
    bool flag =false;
    for(int i=0;i<=n-m;){
        int j;
        for( j=0;j<m;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==m){
            flag=true;
            cout<<i<<" "<<endl;
            i+=j;
            
        }
        else if(j==0){
            i++;
        }
        else{
            i+=j;
        }

    }
    if(!flag){
        cout<<"Not found"<<endl;
    }
}
int main(int argc, char const *argv[])
{
    char txt[]="ABABBA";
    int n=sizeof(txt)/sizeof(txt[0])-1; //-1 beacause when char arr init using "" sentinel char  is added automatically
    char pat[]="AB";
    int m=sizeof(pat)/sizeof(pat[0])-1;
    naiveD(txt,n,pat,m);
    return 0;
}
