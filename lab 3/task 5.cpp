class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};

Node* singlyToDoubly(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;
    while (curr)
    {
        curr->prev = prev;
        prev = curr;
        curr = curr->next;
    }
    return head;
}

Node* singlyToCircular(Node* head)
{
    if (!head) return NULL;
    Node* temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = head;
    return head;
}
