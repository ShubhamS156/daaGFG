#include <iostream>
using namespace std;

typedef struct node
{
    int key;
    node *next;
    node(int x)
    {
        key = x;
        next = NULL;
    }
} node;
node *insertBegin(node *head, int key)  //O(1)
{   
  
    node *temp = new node(key);
    temp->next = head;
    return temp;
}
node* insertEnd(node *head,int key){   //O(n)
    if(head==NULL)
        return new node(key);
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new node(key);
    return head;
    
}
void printList(node *head)
{   node *curr=head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr= curr->next;
    }
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    head = insertBegin(head, 5);
    node *tail=head; //after first insertion tail is head
    head = insertBegin(head, 10);
    head = insertBegin(head, 20);
    head=insertEnd(tail,100);
    cout<<head->key<<endl; 
    printList(head);
    return 0;
}
