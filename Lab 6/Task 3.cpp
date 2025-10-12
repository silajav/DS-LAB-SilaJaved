#include <iostream>
using namespace std;
#define size 5

class Queue{
    int arr[size];
    int front, rear;
public:
    Queue(){
        front=-1;
        rear=-1;
    }

    void enqueue(int x){
        if(rear==size-1){
            cout<<"full"<<endl;
        }
        else{
            if(front==-1){
                front=0;
            }
            rear++;
            arr[rear]=x;
            cout<<"added "<<x<<endl;
        }
    }

    void dequeue(){
        if(front==-1 || front>rear){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"removed "<<arr[front]<<endl;
            front++;
        }
    }

    void display(){
        if(front==-1 || front>rear){
            cout<<"nothing"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    void check(){
        if(front==-1 || front>rear){
            cout<<"empty"<<endl;
        }
        else if(rear==size-1){
            cout<<"full"<<endl;
        }
        else{
            cout<<"in use"<<endl;
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
    q.check();
}
