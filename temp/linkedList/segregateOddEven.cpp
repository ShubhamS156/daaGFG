#include <iostream>
using namespace std;
//IDEA: use something like lamuto partition. One  traversal solution
typedef struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
        next = NULL;
    }
} Node;
Node *insert(Node *head, int key) //O(1)
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
        cout << curr->key << " ";
        curr = curr->next;
    }
    cout << endl;
}
void segregate(Node *head)
{
    Node *j = head;
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->key) % 2 == 0)
        {
            int temp = curr->key;
            curr->key = j->key;
            j->key = temp;
            j = j->next;
        }
        curr = curr->next;
    }
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 10);
    head = insert(head, 12);
    head = insert(head, 8);
    head = insert(head, 15);
    head = insert(head, 17);
    cout << "List before segregation" << endl;
    printList(head);
    cout << "After: " << endl;
    segregate(head);
    printList(head);

    return 0;
}
