// //IDEA:reverse each word first then reverse the whole array
// //maintain two variables start which points to start of a word and end which points to the end
//REPLACE STRING BY CHAR ARR[] TO MAKE IT WORK
#include<iostream>
#include<string>
using namespace std;
void revWord(string &arr,int low,int high){
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void revString(string &arr,int n){
    int start=0;
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            revWord(arr,start,i-1);
            start=i+1;
        }
        
    }
    revWord(arr,start,n-1);
    revWord(arr,0,n-1);
}

int main(int argc, char const *argv[])
{
    string arr="my name is shubham";
    int n=sizeof(arr)/sizeof(arr[0])-1;//-1 to remove the sentinel character from the size  calculated
    revString(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
    cout<<arr<<endl;
    return 0;
}

// void pri(string &in){
//     cout<<in[]<<endl;
// }
// int main(int argc, char const *argv[])
// {
//     string input="shubh";
//     pri(input);
//     return 0;
// }
