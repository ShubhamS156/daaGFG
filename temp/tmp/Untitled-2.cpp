#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{   int i=0;
    char s[]="m.name.is";
    char *start=s;
    char *end;
    while(*(s+i)!='\0'){
        if(*(s+i)=='.'){
            end=s+i;
            cout<<"start-> "<<*start<<" "<<"end-> "<<*(end-1)<<endl;
            reverse(start,end);
            start=s+i+1;
        }
        i++;
    }
    cout<<*(start)<<endl;
  
    reverse(start,s+i);
    reverse(s,s+i);
    cout<<s<<endl;
    return 0;
}
