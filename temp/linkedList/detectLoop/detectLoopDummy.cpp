//detect if there is a loop in linked list
#include <iostream>
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

bool detectLoop(Node *head)
{
    Node *curr = head;
    Node *tmp = new Node(-1);
    while (curr != NULL)
    {
        if (curr->next == NULL)
            return false;
        if (curr->next == tmp)
            return true;
        Node *nextNode = curr->next;
        curr->next = tmp;
        curr = nextNode;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = insert(head,10);
    Node *tail = NULL;
    tail=insert(tail,20);
    head->next=tail;
    tail->next=head;
    cout<<detectLoop(head);
    return 0;
}
