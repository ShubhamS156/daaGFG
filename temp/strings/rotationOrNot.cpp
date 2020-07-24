#include<iostream>
#include<string>
using namespace std;
void isRotated(string str1, string str2)
{
    
    int len=str1.length();
    int len2=str2.length();
   if(len!=len2)
        cout<<"no";
       // return false;

    if(len<=2 || len2<=2)
        if(str1.compare(str2))
            cout<<"yes";
        //return(str1.compare(str2));
    string cw="";
    cw=cw+str1.substr(2,len-2)+str1.substr(0,2);
    string acw="";
    acw=acw+str1.substr(len-2,2)+str1.substr(0,len-2);
    cout<<cw<<endl;
    cout<<acw<<endl;
    if(str2==cw)
        cout<<"yees";
    if(  str2==acw)
        cout<<"acw";
    
    
    
    //return false;
    
}
int main(int argc, char const *argv[])
{   
   string str1="rellnmpapqfwkhop";
   string str2="llnmpapqfwkhopre";
   //cout<<isRotated(str1,str2);
   isRotated(str1,str2);
    return 0;
}
