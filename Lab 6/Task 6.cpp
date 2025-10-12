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

    void display(){
        if(top == -1){
            cout<<"nothing"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    Stack s1, s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    cout<<"before reverse:"<<endl;
    s1.display();

    while(!s1.isEmpty()){
        s2.push(s1.pop());
    }

    cout<<"after reverse:"<<endl;
    s2.display();
}
