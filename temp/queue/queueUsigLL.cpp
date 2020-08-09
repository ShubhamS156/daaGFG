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
Node *enqeue(Node *tail, int key)
{ 	
	Node* tmp=new Node(key);
	if(tail==NULL)
			return tmp;
	else
		tail->next=tmp;

	return tmp;
}
void printList(Node *head)
{
    Node *curr = head->next;
	
    while (curr != NULL)
    {
        cout << curr->key << " " ;
        curr = curr->next;
    }
}
Node* dequeue(Node *head){
	Node* res=head->next;
	delete(head);
	return  res;	
}

