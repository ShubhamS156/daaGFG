#include <iostream>
using namespace std;
// swap kth node from front and end;
//intresting case:
//  x and y are same
//  x and y are next to each other
// x and y are not present

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
Node *swapKth(Node *head, int num, int k)
{
    if(k>num)
        return head;
    Node *x=head, *x_prev=NULL, *y=head, *y_prev=NULL;
    int count=k-1;
    while(count--){
        x_prev=x;
        x=x->next;
    }
    count=num-k;
    while(count--){
        y_prev=y;
        y=y->next;
    }
    if(x_prev)
        x_prev->next=y;
    if(y_prev)
        y_prev->next=x;
    
    Node *tmp=x->next;
    x->next=y->next;
    y->next=tmp;

    if(k==1)
        return y;
    if(k==num)
        return x;
    return head;
}