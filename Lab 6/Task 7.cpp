#include <iostream>
using namespace std;
#define size 5

class Queue{
    int arr[size];
    int front, rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if(rear == size-1){
            cout<<"full"<<endl;
        }
        else{
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = x;
        }
    }

    int dequeue(){
        if(front == -1 || front > rear){
            cout<<"empty"<<endl;
            return -1;
        }
        else{
            int x = arr[front];
            front++;
            return x;
        }
    }

    bool empty(){
        return (front == -1 || front > rear);
    }

    void display(){
        if(front == -1 || front > rear){
            cout<<"nothing"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

class Stack{
    int arr[size];
    int top;
public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top == size-1){
            cout<<"full"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    }

    int pop(){
        if(top == -1){
            cout<<"empty"<<endl;
            return -1;
        }
        else{
            int x = arr[top];
            top--;
            return x;
        }
    }

    bool empty(){
        return (top == -1);
    }
};

int main(){
    Queue q;
    Stack s;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"before reverse:"<<endl;
    q.display();

    while(!q.empty()){
        s.push(q.dequeue());
    }

    while(!s.empty()){
        q.enqueue(s.pop());
    }

    cout<<"after reverse:"<<endl;
    q.display();
}
