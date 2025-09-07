class Node
{
public:
    int data;
    Node* next;
    Node* child;

    Node(int x)
    {
        data = x;
        next = child = NULL;
    }
};

Node* flatten(Node* head)
{
    if (!head) return NULL;
    Node* curr = head;
    while (curr)
    {
        if (curr->child)
        {
            Node* temp = curr->next;
            curr->next = curr->child;
            Node* t = curr->child;
            while (t->next)
            {
                t = t->next;
            }
            t->next = temp;
            curr->child = NULL;
        }
        curr = curr->next;
    }
    return head;
}
