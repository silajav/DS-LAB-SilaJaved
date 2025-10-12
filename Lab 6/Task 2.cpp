#include <iostream>
using namespace std;

class Node{
public:
    string data;
    Node* next;
    Node(string x){
        data=x;
        next=NULL;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top=NULL;
    }

    void push(string x){
        Node* n = new Node(x);
        n->next = top;
        top = n;
        cout<<"pushed "<<x<<endl;
    }

    void pop(){
        if(top==NULL){
            cout<<"empty"<<endl;
        }
        else{
            cout<<"popped "<<top->data<<endl;
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void peek(){
        if(top==NULL){
            cout<<"no data"<<endl;
        }
        else{
            cout<<"top "<<top->data<<endl;
        }
    }

    void display(){
        if(top==NULL){
            cout<<"nothing"<<endl;
        }
        else{
            Node* t=top;
            while(t!=NULL){
                cout<<t->data<<endl;
                t=t->next;
            }
        }
    }
};

int main(){
    Stack s;
    s.push("google");
    s.push("youtube");
    s.push("github");
    s.display();
    s.peek();
    s.pop();
    s.display();
}
