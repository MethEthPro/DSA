#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

class Stack{
    Node* top;
    int size;

public:
    Stack(){
        top = nullptr;
        size = 0;
    }

    void push(int x){
        Node* temp = new Node(x, top);
        top = temp;
        size++;
    }

    int peek(){
        if(top == nullptr){
            cout<<"empty stack"<<endl;
            return -1;
        }
        return top->data;
    }

    int pop(){
        if(top == nullptr){
            cout<<"empty stack"<<endl;
            return -1;
        }
        int topdata = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return topdata;
    }
    int getSize(){
        return size;
    }


};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.getSize() << endl;

    cout << "Popping element: " << s.pop() << endl;
    cout << "New top element: " << s.peek() << endl;
    cout << "Stack size after pop: " << s.getSize() << endl;
}