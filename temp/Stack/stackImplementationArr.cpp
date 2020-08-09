#include <iostream>
using namespace std;
class stackImplementationArr
{
private:
   const int size=5;
   int top=0;
   
    /* data */
public:
    int arr[5];
    int pop(){
        if(top==-1)
            return -1;
        int res=arr[top];
        top--;
        return res;
    }
    void push(int val){
        if(top==size-1)
            return ;
        top++;
        arr[top]=val;
    }
    void printStack(){
        if(top==-1)
            return ;
        for(int i=0;i<top;i++){
            cout<<arr[i]<<" ";
        }
    }

};
int main(int argc, char const *argv[])
{
    stackImplementationArr st1;
    st1.push(1);
    st1.push(2);
    st1.printStack();
    cout<<st1.pop()<<endl;
    st1.push(3);
    st1.printStack();
    return 0;

}

