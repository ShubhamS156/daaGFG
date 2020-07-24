//reverse every k nodes. If the remaining nodes are less than k reverse 'em all
#include <iostream>
using namespace std;
//IDEA: reverse first k nodes. if  length of the list is > k  then kth node is gonna be head always else the ////last node is gonna be head
//after reversing nodes in group of k connect them

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
Node *reverseKNodes(Node *head, int k)
{   Node* curr=head, *nextn=head->next, *prev=NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        count++;
        nextn = curr->next;
        curr->next = prev;
        prev=curr;
        curr=nextn;
    }
    if(nextn!=NULL){
        Node* rest_head=reverseKNodes(curr,k);
        head->next=rest_head;
    }
    return prev;
}
int main(int argc, char const *argv[])
{
    Node*head=NULL;
    head=insert(head,7);
    head=insert(head,6);
    head=insert(head,5);
    head=insert(head,4);
    head=insert(head,3);
    head=insert(head,2);
    head=insert(head,1);
    cout<<"Orignal List: "<<endl;
    printList(head);
    cout<<"Reversing K groups "<<endl;
    int k=3;
    head=reverseKNodes(head,k);
    printList(head);
    return 0;
}

