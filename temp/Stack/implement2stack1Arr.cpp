#include <iostream>
using namespace std;

class TwoStack
{
public:
     int n;
    TwoStack(int size)
    {
        n = size;
    }
    int *arr = new int[n];
     int top1=-1; //init
     int top2=n; //init
    
     int size1()
    {
        if (top1 >= 0)
        {
            return top1 + 1;
        }
        return 0;
    }
     int size2()
    {
        if (top2 < n)
            return n - top2;
        return 0;
    }
    void push1(int val)
    {
        if (this->size1() + this->size2() < n)
        {
            top1++;
            arr[top1] = val;
        }
        else
        {
            cout << "OVERFLOW!!!" << endl;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int res = arr[top1];
            top1--;
            return res;
        }
        else
        {
            cout << "UNDERFLOW!!!";
            return -1;
        }
    }
    void push2(int val)
    {
        if (this->size1() + this->size2() < n)
        {
            top2--;
            arr[top2] = val;
        }
        else
        {
            cout << "OVERFLOW!!!" << endl;
        }
    }
    int pop2()
    {
        if (top2 < n)
        {
            int res = arr[top2];
            top2--;
            return res;
        }
        else
        {
            cout << "UNDERFLOW!!!" << endl;
            return -1;
        }
    }
    int t1()
    {
        return arr[top1];
    }
    int t2()
    {
        return arr[top2];
    }
    void printStack1(){
        for(int i=0;i<=top1;i++){
            cout<<arr[top1]<<" ";
        }
        cout<<endl;
    }
    
    void printStack2(){
        for(int i=top2;i<=0;i--){
            cout<<arr[top2]<<" ";
        }
        cout<<endl;
    }
};

int main(int argc, char const *argv[])
{
    
    TwoStack stack(5);
    stack.push1(1);
    stack.push1(2);
    cout<<stack.t1()<<endl;
    stack.push2(5);
    stack.push2(4);
    stack.push2(3);
    stack.push2(2);
    stack.pop2();
    stack.pop1();
    stack.printStack1();
    stack.printStack2();

    return 0;
}
