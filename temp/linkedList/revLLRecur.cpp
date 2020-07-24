#include <iostream>
using namespace std;
int a=10;
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
}

Node *recursiveRev(Node *head)
{   
    if(head==NULL || head->next==NULL)
        return head;
    Node *rest_head=recursiveRev(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;

}
int main(int argc, char const *argv[])
{
    Node* head=NULL;
    head=insert(head,0);
    head=insert(head,5);
    head=insert(head,10);
    head=insert(head,20);
    cout<<"Current List:"<<endl;
    printList(head);
    cout<<endl;/* code */
    head=recursiveRev(head);
    cout<<"After reversing"<<endl;
    printList(head);
    cout<<"a: "<<a<<endl;

    return 0;
}
