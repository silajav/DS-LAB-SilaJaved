struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

int josephus(int n, int k) {
    Node* head = new Node(1);
    Node* prev = head;
    for (int i = 2; i <= n; i++) {
        prev->next = new Node(i);
        prev = prev->next;
    }
    prev->next = head;
    Node* curr = head;
    Node* temp;
    while (curr->next != curr) {
        for (int count = 1; count < k - 1; count++)
            curr = curr->next;
        temp = curr->next;
        curr->next = temp->next;
        delete temp;
        curr = curr->next;
    }
    int ans = curr->data;
    delete curr;
    return ans;
}
