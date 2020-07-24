#include<iostream>
using namespace std;
//IDEA: copy next key into given node

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

void deleteNode(Node* curr){
    Node* nextN=curr->next;
    curr->key=nextN->key;
    curr->next=nextN->next;
    nextN->next=NULL;
    
}
