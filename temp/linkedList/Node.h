typedef struct Node{
    int key;
    Node* next;
    Node(int x){
        key=x;
    }
}Node;
Node *insertBegin(Node *head, int key)  //O(1)
{   
  
    Node *temp = new Node(key);
    temp->next = head;
    return temp;
}
Node* insertEnd(Node *head,int key){   //O(n)
    if(head==NULL)
        return new Node(key);
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=new Node(key);
    return head;
    
}
void printList(Node *head)
{   Node *curr=head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr= curr->next;
    }
}