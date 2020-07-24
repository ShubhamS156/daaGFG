#include <iostream>
using namespace std;
//IDEA: calculate hash and compare pattern only after hash matches

void karp(char txt[], int n, char pat[], int m)
{
    bool flag = false;
    int d = 5, q = 7;
    int h = 1;
    for (int i = 0; i < m - 1; i++)
    {
        h = (h * d) % q; //h stores d^(m-1)%q
    }
    int t = 0, p = 0;
    for (int i = 0; i < m; i++)
    {
        t = (t * d + txt[i]) % q;
        p = (p * d + pat[i]) % q;
    }

    for (int i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            int j;
            for (j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                    break;
            }
            if (j == m)
            {
                flag = true;
                cout << i << " ";
            }
        }
        if (i < n - m)
        {
            t = (d * (t - h * txt[i]) + txt[i + m]) % q;
        }
        if (t < 0)
        {
            t += q;
        }
    }
    if (!flag)
        cout << "nada";
}
int main(int argc, char const *argv[])
{
    char text[] = "BABABBA";
    int n = sizeof(text) / sizeof(text[0]) - 1;
    char pat[] = "AB";
    int m = sizeof(pat) / sizeof(pat[0]) - 1;
    karp(text, n, pat, m);
    return 0;
}
