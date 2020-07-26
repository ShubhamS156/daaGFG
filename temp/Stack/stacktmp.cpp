#include<iostream>
#include<stack>
using namespace std;

bool brackets(char a,char b){
    if(a=='[' && b==']')
        return true;
    else if(a=='{' && b=='}')
        return true;
    else if(a=='(' && b==')')
        return true;
    else
        return false;
    
}
int main(int argc, char const *argv[])
{
    stack<char> s;
    s.push('a');
    s.push('a');
    char a=s.top();
    cout<<a<<endl;
    char str[]="()";
    cout<<brackets(str[0],s.top());
    return 0;
}
