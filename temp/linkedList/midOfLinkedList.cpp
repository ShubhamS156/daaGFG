#include <iostream>
using namespace std;
//Print the middle key in a linked list;
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

void midNode(Node* head){
    Node *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    curr=head;
    for(int i=0;i<count/2;i++){
        curr=curr->next;
    }
    cout<<curr->key<<endl;
}
int main(int argc, char const *argv[])
{
    Node* head=NULL;
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,20);
    head=insert(head,30);
    midNode(head);
    return 0;
}
