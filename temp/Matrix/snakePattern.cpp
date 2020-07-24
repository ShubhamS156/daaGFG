#include<iostream>
#include<vector>
using namespace std;

void printSnake(vector<vector<int>> &arr){
    int i=0,j=0,k=0;
    for(i=0;i<arr.size();i++){
        
       if(i%2==0){
           for(int j=0;j<arr[i].size();j++){
               cout<<arr[i][j]<<" ";
           }
       }
       else
       {
           for (int j = arr[i].size()-1; j >=0 ; j--)
           {
               cout<<arr[i][j]<<" ";
           }
           
       }
       
       cout<<" ";
        
    }
}
int main(int argc, char const *argv[])
{   int m=3,n=2,num=10;

    vector<vector<int>> arr;

    for(int i=0;i<m;i++){
        vector<int> v;
        for (int j = 0; j<n; j++)
        {
            v.push_back(num);
            num+=5;
        }
        arr.push_back(v);
        
    }
   //
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
        
    }
    cout<<"In snake form"<<endl;
   printSnake(arr);
    //cout<<"shubh";
   //cout<<arr[0];
    return 0;
}
