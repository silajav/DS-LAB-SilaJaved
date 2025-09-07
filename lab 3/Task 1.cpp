#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() { 
        head = NULL;
        }

    void insertAtTail(int val) {
        Node* n = new Node(val);
        if (!head) {
            head = n;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = n;
    }

    bool ispalindrome() {
        if (head!=NULL || head->next!=NULL){
            return true;
        } 

        //go to mid:
        
        Node* slow = head;
        Node* fast = head;
        while (fast->next!=NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //reverse:
        
        Node* prev = NULL;
        Node* curr = slow->next;
        while (curr!= NULL) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        Node* secondHalf = prev;

        
        Node* firstHalf = head;
        while (secondHalf != NULL) {
            if (firstHalf->data != secondHalf->data){
                return false;
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};

int main() {
    LinkedList list;
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(2);
    list.insertAtTail(1);

    if (list.ispalindrome()){
        cout<<"Yes the list is Palindrome"<<endl;
    }else{
        cout<<"Not Palindromw."<<endl;
    }
}


