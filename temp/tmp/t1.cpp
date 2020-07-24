#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string a = "1010";
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1')
            count++;
    }
    cout<<count<<endl;
    // cout<<a[1];
    return 0;
}
