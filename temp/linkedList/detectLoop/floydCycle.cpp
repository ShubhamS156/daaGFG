#include <iostream>
using namespace std;
//IDEA: Kids running around a well

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

bool floyd(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    Node* head=new Node(10);
    Node* tail=new Node(20);
    head->next=tail;
    //tail->next=head;   //enable to make list a loop
    cout<<floyd(head);
    return 0;
}
