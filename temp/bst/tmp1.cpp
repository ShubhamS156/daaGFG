#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> mp;
    mp[0]=0;
    mp[1]=1;
    mp[0]=10;
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->second<<" ";
    }
    return 0;
}
