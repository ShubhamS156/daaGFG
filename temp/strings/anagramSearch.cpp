#include <iostream>
using namespace std;
/* 
For every window check if Cp and Ct contents are same
*/
bool areSame(int ct[],int cp[]){
    for(int i=0;i<256;i++){
        if(cp[i]!=ct[i])
            return false;
    }
    return true;
}
bool anagram(char txt[], int n, char pat[], int m)
{
    int ct[256] = {0};
    int cp[256] = {0};
    for (int i = 0; i < m; i++)
    {
        ct[txt[i]]++;
        cp[pat[i]]++;
    }
    for (int i = m; i < n; i++)
    { //i marks the last element of current window
        if (areSame(cp, ct))
            return true;
        // if current window not same
        ct[txt[i]]++;
        ct[txt[i - m]]--;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    char txt[]="shubham";
    char pat[]="bhum";
    int n=sizeof(txt)/sizeof(txt[0])-1;
    int m=sizeof(pat)/sizeof(pat[0])-1;
    cout<<anagram(txt,n,pat,m);
    return 0;
}
