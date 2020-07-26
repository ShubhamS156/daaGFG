#include<iostream>
#include<stack>
using namespace std;

bool brackets(char a,char b){
    if(a=='[' && b==']')
        return true;
    else if(a=='{' && b=='}')
        return true;
    else if(a=='(' && b==')')
        return true;
    else
        return false;
    
}
bool isBalanced(char *str, int n){
    stack<char> s;
    cout<<"size is "<<n<<endl;
    for(int i=0;i<n;i++){ //for each char in string
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){//check if char is an opening bracket
            cout<<"i: "<<i<<" "<<"opening bracket "<<str[i]<<endl;
            s.push(str[i]);
        } 
        else{
            cout<<"i: "<<i<<" "<<"closing bracket "<<str[i]<<endl;
            if(s.empty()){
                cout<<"Encountered closing bracket before opening bracket"<<endl;
                return false;
            }
            if(brackets(s.top(),str[i])==false){ //if closing bracket but not mathcing to the opening bracket on top then return false
                cout<<"Non matching bracket closed first"<<endl;
                return false;
            }
            else{ //if closing bracket is matching to top then pop the top bracket
                cout<<"closing bracket matched "<<endl;
                s.pop();
            }
        }
    }
    //finally stack should be empty
    if(s.empty()){
        cout<<"empty stack returning true"<<endl;
        return true;
    }
    else{
        cout<<"non empty stack in the end"<<endl;
        return false;
    }
}
int main(int argc, char const *argv[])
{
    char str[]="([{}])";
    int n=sizeof(str)/sizeof(str[0])-1;
    cout<<isBalanced(str,n)<<endl;
    return 0;
}
