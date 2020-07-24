//handle single row and single coulmn explicitly
#include<iostream>
#include<vector>
using namespace std;

void boundary(vector<vector<int>> &arr){
    int i=0,j=0;
    
        while(i==0 && j<arr[i].size()){
            cout<<arr[i][j]<<" ";
            j++;
        }
        j=j-1;
        i++;
        while(j==arr[i].size()-1 && i<arr.size()){
            cout<<arr[i][j]<<" ";
            i++;
        }
        i=i-1;
        j--;
        while(i==arr.size()-1 && j>=0){
            cout<<arr[i][j]<<" ";
            j--;
        }
        j=j+1;
        i--;
        while(j==0 && i>=0){
            cout<<arr[i][j]<<" ";
            i--;
        }


    
}
int main(int argc, char const *argv[])
{   int num=5;
    vector<vector<int>> vec;
    int m=1,n=4;
    for(int i=0;i<m;i++){
        vector<int> v1;
        for(int j=0;j<n;j++){
            v1.push_back(num);
            num+=5;
        }
        vec.push_back(v1);
    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"Boundary: "<<endl;
    boundary(vec);
    return 0;
}


