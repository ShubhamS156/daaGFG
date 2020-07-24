#include <iostream>
using namespace std;
//call function for first n-1 node then link last node to reversed list
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
Node *recur(Node *prev, Node *curr)
{   
    if(curr==NULL )
        return prev;
    Node *nextn = curr->next;
    curr->next = prev;
    return recur(curr, nextn);
}
int main()
{
    Node *head = NULL;
    head = insert(head, 0);
    head = insert(head, 5);
    head = insert(head, 10);
    head = insert(head, 20);
    cout << "Current List:" << endl;
    printList(head);
    head=recur(NULL,head);
    cout << "After reversing" << endl;
    printList(head);
    return 0;
}