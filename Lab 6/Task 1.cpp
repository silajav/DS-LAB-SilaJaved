#include <iostream>
using namespace std;
#define size 5

class Stack{
    int arr[size];
    int top;
public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top==size-1){
            cout<<"stack full"<<endl;
        }
        else{
            top++;
            arr[top]=x;
            cout<<"pushed "<<x<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"stack empty"<<endl;
        }
        else{
            cout<<"popped "<<arr[top]<<endl;
            top--;
        }
    }

    void peek(){
        if(top==-1){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"top is "<<arr[top]<<endl;
        }
    }

    void display(){
        if(top==-1){
            cout<<"nothing"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
}
