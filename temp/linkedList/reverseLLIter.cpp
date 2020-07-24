#include <iostream>
using namespace std;
//Reverse a linked list using iteration
//IDEA: Naive==> make aux dynamic container and copy ll in it then traverse the container from end and copy
//elements in ll
//EFF==> maintain 3 pointers prev curr and next
typedef struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
    }
} Node;
Node *insert(Node *head, int key)
{
    Node *temp = new Node(key);
    temp->next = head;
    return temp;
}
void printList(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" "<<endl;
        curr=curr->next;
    }
}
Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=head->next;
    while(curr!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next;
        if(curr!=NULL)  //IMPORTANT: dont update next when curr reverses last node and becomes null
         next=curr->next;
    }
    return prev;
}
int main(int argc, char const *argv[])
{   Node* head=NULL;
    head=insert(head,0);
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,20);
    cout<<"Current List:"<<endl;
    printList(head);
    head=reverseList(head);
    cout<<"After reversing"<<endl;
    printList(head);
    return 0;
}
