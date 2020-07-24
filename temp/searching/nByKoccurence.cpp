#include <iostream>
#include <unordered_map>
using namespace std;

void nByk(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    int capacity = 0;
    for (int i = 0; i < n; i++)
    {

        if (capacity < k-1)
        {
            mp[arr[i]]++;
            capacity++;
        }
        else
        {
            if(mp.find(arr[i])==mp.end())
                for (auto x : mp)
                    x.second--;
            else{
                mp[arr[i]]++;
            }
        }
        for (auto x : mp)
        {
            if (x.second == 0)
            {
                mp.erase(x.first);
                capacity--;
            }
        }
    }
    mp.clear();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        if(x.second>(n/k))
            cout<<": "<<x.first<<endl; 
    }
}
int main(int argc, char const *argv[])
{
    int arr[]={1,1,1,1,2,2,2,2};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    nByk(arr,n,k);
    return 0;
}
