//print matrix in spiral form
//seperate the reverse printing function insted of using ternary
//does not work properly.
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
void printR(vector<vector<int>> &arr,int s,int e,int row){
    
    for (int i = s;s<e? i<=e : i>=e; s<e?i++:i--)
    {
        cout<<arr[row][i]<<" ";
    }
    
}

void printC(vector<vector<int>> &arr,int s,int e,int col){
    for(int i=s;s<e?i<=e:i>=e;s<e?i++:i--){
        cout<<arr[i][col]<<" ";
    }
}

void spiral(vector<vector<int>> &arr){
    int top=0,right=arr[0].size()-1,bottom=arr.size()-1,left=0; 
    cout<<"Initially "<<endl;
 cout<<"Top: "<<top<<" Right: "<<right<<" Bottom: "<<bottom<<" Left: "<<left<<endl;
    while(top<bottom && left<right){
       
        printR(arr,left,right,top);
        top++;
        printC(arr,top,bottom,right);
        right--;
        printR(arr,right,left,bottom);
        bottom--;
        printC(arr,bottom,top,left);
        left++;
         cout<<"Top: "<<top<<" Right: "<<right<<" Bottom: "<<bottom<<" Left: "<<left<<endl;


    }    

}
int main(int argc, char const *argv[])
{   int num=1;
    vector<vector<int>> vec;
    for(int i=0;i<4;i++){
        vector<int> v1;
        for(int j=0;j<4;j++){
            v1.push_back(num);
            num++;
        }
        vec.push_back(v1);
    }
printvec(vec);
cout<<"SpiralForm:"<<endl;
        spiral(vec);
        return 0;
}
