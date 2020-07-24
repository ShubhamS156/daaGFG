#include<iostream>
#include<unordered_set>
using namespace std;
//use hash set to detect loop 
typedef struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
    }
} Node;
Node *insertNode(Node *head, int key)
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
bool isLoop(Node* head){
    unordered_set<Node*> u;
    Node*  curr;
    for(curr=head;curr!=NULL;curr=curr->next){
        if(u.find(curr)!=u.end())
            return true;
        u.insert(curr);
    }
    return false;
}
int main(int argc, char const *argv[])
{
    Node* head=new Node(10);
    Node* tail=new Node(20);
    head->next=tail;
    //tail->next=head;
    cout<<isLoop(head);

    return 0;
}
