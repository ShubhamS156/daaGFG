#include <iostream>
using namespace std;
/*
len=lps[i-1]
IDEA:   case 1  if str[i]==str[len] lps[i]=len++;
        else 
        case 2 dont match and len==0 then lps[i]=0
        case 2.1 dont match but len!=0 len=lps[len-1]
*/

void fillLps(char str[], int lps[], int n)
{
    lps[0] = 0;
    int i = 1;
    int len = lps[0];
    while (i < n)
    {

        if (str[i] == str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                len = lps[len - 1];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    char txt[] = "ababcababa";
    int n = sizeof(txt) / sizeof(txt[0]) - 1;
    int lps[n];
    fillLps(txt,lps,n);
    for(int i=0;i<n;i++){
        cout<<lps[i]<<" ";
    }
    return 0;
}
