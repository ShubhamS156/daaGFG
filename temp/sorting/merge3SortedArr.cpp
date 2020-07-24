#include<iostream>
#include<vector>
using namespace std;

vector<int> threeWay(vector<int> &a,vector<int> &b,vector<int> &c){
    vector<int> res;
    int i=0,j=0,k=0;
    int n1=a.size(),n2=b.size(),n3=c.size();
    while(i<n1 && j<n2 && k<n3){
        if(a[i]<=b[j] && a[i]<=c[k]){
            res.push_back(a[i++]);
            
        }
        else if(b[j]<=a[i] && b[j]<=c[k]){
            res.push_back(b[j++]);
        }
        else if(c[k]<=a[i] && c[k]<=b[j]){
            res.push_back(c[k++]);
        }
       
    }
    while (i<n1 && j<n2)
    {
        if(a[i]<=b[j]){
            res.push_back(a[i++]);
        }
        else if(a[i]>b[j]){
            res.push_back(b[j++]);
        }
       
    }
      while (k<n3 && j<n2)
    {
        if(c[k]<=b[j]){
            res.push_back(c[k++]);
        }
        else if(c[k]>=b[j]){
            res.push_back(b[j++]);
        }
       
    }
     while (k<n3 && i<n1)
    {
        if(c[k]<=a[i]){
            res.push_back(c[k++]);
        }
        else if(c[k]>=a[i]){
            res.push_back(a[i++]);
        }
        
    }
    while(i<n1)
        res.push_back(a[i++]);
    while(j<n2)
        res.push_back(b[j++]);
    while(k<n3)
        res.push_back(c[k++]);
    return res;
}
int main(int argc, char const *argv[])
{
   int num=1;
   vector<int> a;
    vector<int> b;
    vector<int> c;
   for(int i=0;i<3;i++){
       a.push_back(num++);
       b.push_back(num+=2);
       c.push_back(num+=3);
   }
   for(int i=0;i<a.size();i++){
       cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<" "<<endl;
   }
    vector<int> res=threeWay(a,b,c);
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
        }
    
    return 0;
}
