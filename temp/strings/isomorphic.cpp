#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
/*
IDEA: incorrect apping when the values dont match in the map array
      or when str1[i] occurs first time but str2[i] doesnt occur first time
*/

bool areIsomorphic(string str1, string str2)
{
    int l1=str1.length();
    int l2=str2.length();
    
    if(l1!=l2)
        return false;
    
    bool marked[256]={false};
    int map[256]={-1};
        memset(map, -1, sizeof(map));
    
    for(int i=0;i<l1;i++){
     if(map[str1[i]]==-1){
         
        if(marked[str2[i]]==true)  //not appearing first time while str1[i] is appearing first time
            return false;
        
        marked[str2[i]]=true;
        map[str1[i]]=str2[i];
     }
     else if(map[str1[i]]!=str2[i])
        return false;
}  
return true;
}