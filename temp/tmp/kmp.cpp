#include <iostream>
using namespace std;
void fillLps(int lps[], char arr[], int n)
{
    lps[0] = 0;
    int len = lps[0];
    int i = 1;
    while (i < n)
    {
        if (arr[i] == arr[len])
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
void kmp(char arr[], int n, char pat[], int m)
{
    int lps[m];
    fillLps(lps,pat,m);
    int i = 0, j = 0;
    while (i < n)
    {
        if (arr[i] == pat[j])
        {
            i++;
            j++;

            if (j == m)
                cout << i - j << " ";
                j = lps[j - 1];
        }
        else if (i < n && pat[j] != arr[i])
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    char txt[] = "ashubham";
    int n = sizeof(txt) / sizeof(txt[0]) - 1;
    char pat[] = "";
    int m = sizeof(pat) / sizeof(pat[0]) - 1;
    kmp(txt, n, pat, m);
    return 0;
}
