#include <iostream>
using namespace std;
//IDEA:use  head and tail pointers

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
        cout << curr->key << " " ;
        curr = curr->next;
    }
}
Node *merge(Node *h1, Node *h2)
{
    Node *a = h1, *b = h2, *head = NULL, *tail = NULL;
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    bool firstComp = true;
    while (a != NULL && b != NULL)
    {
        if (a->key <= b->key)
        {
            if (firstComp)
            {
                head = h1;
                tail = h1;
                a = a->next;
                firstComp = false;
            }
            else{
            tail->next = a;
            tail = a;
            a = a->next;
            }
        }
        else
        {
            if (firstComp)
            {
                head = h2;
                tail = h2;
                b = b->next;
                firstComp = false;
            }
            else{
            tail->next = b;
            tail=b;
            b = b->next;
            }
        }
    }
    if (a != NULL)
    {
        tail->next = a;
        
    }
    if (b != NULL)
    {
        tail->next = b;
        
    }
    return head;
}
int main(int argc, char const *argv[])
{
    Node *h1 = NULL;
    Node *h2 = NULL;

    h1 = insert(h1, 40);
    h1 = insert(h1, 30);
    h1 = insert(h1, 20);
    h1 = insert(h1, 10);

    h2 = insert(h2, 35);
    h2 = insert(h2, 18);
    h2 = insert(h2, 17);
    h2 = insert(h2, 15);
    h2 = insert(h2, 5);

    cout << "List1: " << endl;
    printList(h1);
    cout << endl;
    cout << "List2: " << endl;
    printList(h2);
    cout << endl;
    Node *head = merge(h1, h2);
    cout<<"After merging: "<<endl;
    printList(head);
    return 0;
}
