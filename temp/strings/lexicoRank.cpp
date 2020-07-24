#include <iostream>
using namespace std;
/* Idea:
Calculate number of elements smaller than current i.e str[i]=count
count*(n-i-1)factorial where m is length of str and n-i-1 gives remaining pos when fixing ith element
keep adding res
o(n^2) approach to make it O(n) calculate count of smaller char to right in O(1)
*/
int factorial(int a)
{
    int res = 1;
    for (int i = a; i > 0; i--)
    {
        res = res * i;
    }
    cout << "factorial " << res << endl;
    return res;
}

int lexicorank(char str[], int n)
{
    int count; //stores the number of element smaller than ith elements
    int rank = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i + 1; j < n; j++)    //optimise by making a count array
        {
            if (str[j] < str[i])
            {
                count++;
                cout << "Char:" << str[j] << " count: " << count << endl;
            }
        }
        rank += count * factorial(n - 1 - i);
        cout << "rank " << rank << endl;
    }
    return rank + 1;
}
int main(int argc, char const *argv[])
{
    char str[] = "string";
    int n = sizeof(str) / sizeof(str[0]) - 1;
    cout << "n: " << n << " " << lexicorank(str, n);
    return 0;
}
