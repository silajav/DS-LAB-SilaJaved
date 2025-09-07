struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

Node* reverseInGroups(Node* head, int k) {
    if (!head) return NULL;
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;
    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next) head->next = reverseInGroups(next, k);
    return prev;
}
