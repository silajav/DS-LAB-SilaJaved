Node* mergeSorted(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    Node* head = NULL;
    Node* tail = NULL;

    if (a->data <= b->data) {
        head = tail = a;
        a = a->next;
    } else {
        head = tail = b;
        b = b->next;
    }

    while (a && b) {
        if (a->data <= b->data) {
            tail->next = a;
            tail = a;
            a = a->next;
        } else {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }

    if (a) tail->next = a;
    if (b) tail->next = b;

    return head;
}
