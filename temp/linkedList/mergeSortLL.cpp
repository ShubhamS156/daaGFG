// { Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node **head_ref, int new_data)
{
    Node *new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

Node *findMid(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *nextN = slow->next;
    slow->next = NULL;
    return nextN;
}
Node *merge(Node *head, Node *head2)
{
    Node *tail = NULL;
    Node *res_head = NULL;
    bool firstComp = true;
    Node *a = head, *b = head2;
    while (a != NULL && b != NULL)
    {
        if (a->data <= b->data)
        {
            if (firstComp)
            {
                res_head = head;
                tail = head;
                a = a->next;
                firstComp = false;
            }
            else
            {
                tail->next = a;
                tail = a;
                a = a->next;
            }
        }
        else
        {
            if (firstComp)
            {
                res_head = b;
                tail = b;
                b = b->next;
                firstComp = false;
            }
            else
            {
                tail->next = b;
                tail = b;
                b = b->next;
            }
        }
    }
    if (a != NULL)
    {
        tail->next = a;
    }
    if (b != NULL)
    {
        tail->next = b;
    }
    return res_head;
}
Node *mergeSort(Node *head)
{
    if (head->next == NULL)
        return head;

    Node *head2 = findMid(head);
    head = mergeSort(head);
    head2 = mergeSort(head2);
    return merge(head, head2);
}

int main()
{
    struct Node *a = NULL;
    long n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        push(&a, tmp);
    }
    cout << "Callingg merge sort: " << endl;
    a = mergeSort(a);
    printList(a);
    return 0;
} // } Driver Code Ends