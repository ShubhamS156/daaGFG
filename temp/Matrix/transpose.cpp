//print transpose of a matrix
//handle single row and single col cases explicitly 
#include<iostream>
#include<vector>
using namespace std;
void printvec(vector<vector<int>> &vec){
     for (int i = 0; i < vec.size(); i++)
    {
         for (int j = 0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
void transpose(vector<vector<int>> &arr){
   
 for (int i = 0; i < arr.size(); i++)
 {
     for(int j=i+1;j<arr[i].size();j++){
         swap(arr[i][j],arr[j][i]);
         
     }
 }
 
 printvec(arr);
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> vec;
    int m=4,n=4,num=1;
    for(int i=0;i<m;i++){
        vector<int> v1;
        for(int j=0;j<n;j++){
            v1.push_back(num);
            num++;
        }
        vec.push_back(v1);
    }
   printvec(vec);
    cout<<"Transpose is: "<<endl;
    transpose(vec);
   
    return 0;
}
