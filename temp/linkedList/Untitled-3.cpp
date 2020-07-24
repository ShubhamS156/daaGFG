#include<iostream>
using namespace std;
typedef struct Node{
    int key;
    Node* next;
    Node(int x){
        key=x;
    }
}Node;
Node * insert(Node* head,int key){
    Node *temp=new Node(key);
    temp->next=head;
    return temp;
}

int main(int argc, char const *argv[])
{
    Node * head=NULL;
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,20);
    cout<<(head)->key<<endl;

    return 0;
}
//20 10 5