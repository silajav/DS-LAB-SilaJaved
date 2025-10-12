#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* rear;
public:
    Queue(){
        front = rear = NULL;
    }

    void enqueue(int x){
        Node* n = new Node(x);
        if(rear == NULL){
            front = rear = n;
        } else {
            rear->next = n;
            rear = n;
        }
        cout<<"added "<<x<<endl;
    }

    void dequeue(){
        if(front == NULL){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"removed "<<front->data<<endl;
            Node* temp = front;
            front = front->next;
            if(front == NULL){
                rear = NULL;
            }
            delete temp;
        }
    }

    void display(){
        if(front == NULL){
            cout<<"nothing"<<endl;
        }
        else{
            Node* t = front;
            while(t != NULL){
                cout<<t->data<<" ";
                t = t->next;
            }
            cout<<endl;
        }
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
}
