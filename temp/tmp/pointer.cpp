// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char *);

int main()
{

    char str[] = "ashsssuu";
    char a=getMaxOccuringChar(str);
    cout << a << endl;

} // } Driver Code Ends
char getMaxOccuringChar(char *str)
{
    int count[256];
    memset(count, 0, sizeof(count));
    while (*str != '\0')
    {
        count[*str]++;
        str++;
    }
    for (int i = 0; i < 256; i++)
        if (count[i] > 0)
            cout << count[i]<<" "<<i<<endl;
    int maxInd = 0;
    int freq = 0;
    int i;
    for (i = 0; i < 256; i++)
    {
        if (count[i] > freq)
        {
            freq = count[i];
            maxInd = i;
        }
    }
    cout<<"maxInd: "<<maxInd<<endl;
    char  a= maxInd;
    return a;
}
