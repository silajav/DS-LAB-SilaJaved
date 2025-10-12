#include <iostream>
using namespace std;
#define size 5

class CQueue{
    int arr[size];
    int front, rear;
public:
    CQueue(){
        front = -1;
        rear = -1;
    }

    void enqueue(int x){
        if((rear + 1) % size == front){
            cout<<"full"<<endl;
        }
        else{
            if(front == -1){
                front = 0;
            }
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout<<"added "<<x<<endl;
        }
    }

    void dequeue(){
        if(front == -1){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"removed "<<arr[front]<<endl;
            if(front == rear){
                front = rear = -1;
            }
            else{
                front = (front + 1) % size;
            }
        }
    }

    void display(){
        if(front == -1){
            cout<<"nothing"<<endl;
        }
        else{
            int i = front;
            while(true){
                cout<<arr[i]<<" ";
                if(i == rear) break;
                i = (i + 1) % size;
            }
            cout<<endl;
        }
    }
};

int main(){
    CQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
}
