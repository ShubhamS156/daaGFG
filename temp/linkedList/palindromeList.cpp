//FIXME:
#include<iostream>
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
        //cout << curr->key << " ";
        curr = curr->next;
    }
}

Node* rev(Node* head){
    Node* prev=NULL;
    Node *curr=head;
    while(curr!=NULL){
        Node* nextN=curr->next;
        curr->next==prev;
        prev=curr;
        curr=nextN;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
 //divide the list in 2 halves
 //reverse the latter half
 Node* curr=head;
 int count=0; //number of jumps slow makes
 while(curr!=NULL){
     count++;
     curr=curr->next;
 }
 Node* mid=NULL;
 Node* slow=head,*fast=head->next;
 //if total nodes are even slow makes odd jumps and vice versa
 while(fast!=NULL && fast->next!=NULL){
     slow=slow->next;
     fast=fast->next->next;
     
 }
 mid=slow;
 Node* h2=NULL;
 if(count%2==0){
     h2=mid->next;
 }
 else{

    h2=mid;
 }
 //reverse from h2 till end;
 h2=rev(h2);
 //cout<<h2->data<<endl;
 if(count==2){
     if(head->key!=h2->key)
        return false;
 }
 while(head!=mid){
     if(head->key!=h2->key)
        return false;
    head=head->next;
    h2=h2->next;
 }
 
 return true;
}
int main(int argc, char const *argv[])
{
    Node* head=NULL;
    head=insert(head,3);
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,1);
    head=insert(head,3);    
    cout<<"List: "<<endl;
    printList(head);
    cout<<endl;
    cout<<": "<<isPalindrome(head);
    return 0;
}
