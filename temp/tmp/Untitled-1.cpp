#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void rev(char *s)
{
    char *start = s;
    // string str=start;
    int i = 0;
    while (*(s + i) != '\0')
    {
        if (*(s + i) == '.')
        {
            reverse(start, start + i);
            start += i + 1;
        }
        i++;
       // count++;
    }
   // cout << "count:" << count << endl;
    reverse(start, start + i);
    //reverse(s,s+count);
}
int main(int argc, char const *argv[])
{
    char str[] = "my.name.is.shubham";
    rev(str);
    cout << str << endl;
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     string s="my.name.is.shubh";
//     reverse(s.begin(),s.end());
//     cout<<s<<endl;
//     return 0;
// }
