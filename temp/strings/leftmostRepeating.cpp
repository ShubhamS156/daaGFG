#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int repeatedCharacter (string s) 
{ 
    int res=INT32_MAX;
    int occur[256];
    memset(occur,-1,sizeof(occur));
    for(int i=0;i<s.length();i++){
        if(occur[s[i]]==-1){
            occur[s[i]]=i;
        }
        else{
            res=min(res,occur[s[i]]);
        }
    }
    if(res==INT32_MAX)
        return -1;
    
    return res;
    
    
} 
int main(int argc, char const *argv[])
{
    string s="abcc";
    cout<<repeatedCharacter(s);
    return 0;
}
