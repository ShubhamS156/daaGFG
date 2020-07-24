#include<iostream>
#include<algorithm>
using namespace std;



int countPair(int x[],int n1,int y[],int n2){
    stable_sort(y,y+n2);
     int freq[5]={0};
    for(int i=0;i<n2;i++){
        if(y[i]<5){
            freq[y[i]]++;
        }
    }
int ans=0;
    for(int i=0;i<n1;i++){
        if(x[i]==0){
            continue;
        }
        if(x[i]==1){
            ans+=freq[0];
            continue;
        }
        auto idx=upper_bound(y,y+n2,x[i]);
        
        ans+=(y+n2-idx)+freq[0]+freq[1];

        if(x[i]==2){
            ans-=(freq[3]+freq[4]);
        }
        if(x[i]==3){
            ans+=freq[2];
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int x[]={2,3,4,5};
    int y[]={1,2,3};
    int n1=4;
    int n2=3;
    int a=countPair(x,n1,y,n2);
    cout<<x[14];
    return 0;
}
