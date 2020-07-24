//FIXME:
void swapData(Node *a, Node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
Node *segregate(Node *head)
{

    Node *low = head, *mid = head, *hi = mid->next;
    while ((mid != NULL && hi != NULL))
    {
        switch (mid->data)
        {
        case 0:
            swapData(low, mid);
            low = low->next;
            mid = mid->next;
            break;
        case 1:
            mid = mid->next;
            hi = mid->next;
            break;
        case 2:
            swapData(mid, hi);
            hi = hi->next;
            break;
        }
    }
    return head;
}