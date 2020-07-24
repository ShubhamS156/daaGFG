//number of substrings starting and ending with 1 in a binary array
#include <iostream>
using namespace std;
/*
IDEA: calculate number of 1s then starting with window size 2 calculate sum of all windows till window size n
*/

long bianrySubstring(int n, string a)
{
    long res = 0;
    int count = 0; //number of 1s
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
            count++;
    }
    int winsize = n - count + 1;
    res = ((winsize + 1) * winsize) / 2;
    return res;
}