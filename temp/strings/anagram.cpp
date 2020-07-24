#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string c, string d){
    if(c.length()!=d.length())
        return false;
    
    int count[256]={0};
    for(int i=0;i<256;i++){
        count[c[i]]++;
        count[d[i]]--;
    }

    for(int i=0;i<256;i++)
        if(count[i]!=0)
            return false;
            
    return true;
    
}
int main(int argc, char const *argv[])
{
    string c="b";
    string d="d";
    cout<<isAnagram(c,d);
    return 0;
}

