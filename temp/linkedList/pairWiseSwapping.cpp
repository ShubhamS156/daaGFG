#include <iostream>
using namespace std;
//IDEA: swap first two curr is third node prev is second then use imagination

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
        cout << curr->key << " ";
        curr = curr->next;
    }
}
Node *swap(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *curr = head->next->next;
    Node *prev = head;
    head = head->next;
    head->next = prev;
    while (curr != NULL && curr->next != NULL)
    {
        prev->next = curr->next;
        prev = curr;
        Node *nextNode = curr->next->next;
        curr->next->next = curr;
        curr = nextNode;
    }

    prev->next=curr;
    return head;

}
int main(int argc, char const *argv[])
{
     Node *h1 = NULL;
  

    h1 = insert(h1, 40);
    h1 = insert(h1, 30);
    h1 = insert(h1, 20);
    h1 = insert(h1, 10);
    cout<<"List: "<<endl;
    printList(h1);
    cout<<endl;
    cout<<"After: "<<endl;
    h1=swap(h1);
    printList(h1);
    return 0;
}
