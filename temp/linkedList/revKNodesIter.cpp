//Reverse k nodes iteratively 
#include<iostream>
using namespace std;

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
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->key << " " << endl;
        curr = curr->next;
    }
}

Node* revKnodes(Node* head,int k){
    Node *curr=head, *prevFirst=NULL;
    bool firstPass=true;
    while(curr!=NULL){
        Node* first=curr,*prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            Node *nextn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextn;
            count++;
        }
        if(firstPass){
            firstPass=false;
            head=prev;
        }
        else{
            prevFirst->next=prev; //prev  is current head
        }
        prevFirst=first;
    }
    return head;
}
