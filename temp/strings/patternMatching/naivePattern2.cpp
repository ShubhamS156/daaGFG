#include<iostream>
using namespace std;
//It is given that the PATTERN has all distince elements. We have to use the fact and improve the naive approach
//IDEA: if there have been a few matches then directly skip to the window from where the MISMATCH started
//coz the pattern is distinct the prev letters wont match to the next ones
//Overall time complexity is linear as if more iterations of inner loop are done that many iterations of outer
//loop are saved by skipping i
void naiveDistinct(char text[],char pat[],int n,int m){
    bool flag=false;
    for(int i=0;i<=n-m;){ //i<=n-m means there'll be n-m+1 iterations. That is in fact the number of windows
        int j;
        for(j=0;j<m;j++){
            if(text[i+j]!=pat[j])
                break;
        }
        if(j==m){
            cout<<i<<" "<<endl;
            flag=true;
            i+=j;
            //  break;
        }
        else if(j==0)
            i++;
        else
        {
            i+=j; //move the window j ahead.
        }
    }
    if(!flag){
        cout<<"not found"<<endl;
    }
}
int main(int argc, char const *argv[])
{
    char text[]="ABABBA";
    int n=sizeof(text)/sizeof(text[0])-1;
    char pat[]="AB";
    int m=sizeof(pat)/sizeof(pat[0])-1;
    naiveDistinct(text,pat,n,m);
    return 0;
}
