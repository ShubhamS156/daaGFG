#include <iostream>
using namespace std;
//Use two pointer slow and fast
//fast increments by 2 node and slow by one node
//when fast reaches end slow reaches mid

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
void midNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->key<<endl;
}
int main(int argc, char const *argv[])
{
    Node *head=NULL;
    head=insert(head,0);
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,20);
    midNode(head);
    return 0;
}
