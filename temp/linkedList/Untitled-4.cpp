#include <iostream>
#include <Node.h>
using namespace std;

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    head = insertBegin(head, 10);
    head=insertBegin(head,20);
    printList(head);
     return 0;
}
