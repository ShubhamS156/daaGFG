#include <iostream>
using namespace std;

//find the nth node from the end
//IDEA: maintain two pointers
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
void nthNode(Node *head, int n)
{   if(head==NULL){
    cout<<"Empty list";
    return ;
}
    Node *first = head;
    Node *second = head;
    for (int i = 0; i < n; i++)
    { //this puts the first pointer n nodes ahead
        first = first->next;
        if (first == NULL)
        {
            cout << "Invalid n" << endl;
            return;
        }
    }
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->key;
}
int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    nthNode(head, 1);

    return 0;
}
