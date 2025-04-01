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

class Queue{
public:    
    Node* start;
    Node* end;
    int size;

public:
        Queue(){
            start = nullptr;
            end = nullptr;
            size = 0;
        }

        void push(int x){
            Node* temp = new Node(x);
            if(size == 0){
                start = end = temp;
            }
            else{
                end->next = temp;
                end = end->next;
            }
            size++;
        }

        int pop(){
            if(size == 0){
                cout<<"queue is empty"<<endl;
                return -1;
            }

            int datavalue = start->data;
            Node* temp = start;
            start = start->next;
            delete temp;
            size--;

            if(size == 0){
                start = end = nullptr;
            }
            return datavalue;
        }

        int front(){
            if(size==0){
                cout<<"queue is empty"<<endl;
                return -1;
            }

            return start->data;
        }

        int getSize(){
            return size;
        }
        
        bool isEmpty(){
            return size==0;
        }
};

int main(){

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // Should print 10
    cout << "Queue size: " << q.getSize() << endl;  // Should print 3

    cout << "Popping: " << q.pop() << endl; // Should print 10
    cout << "New front: " << q.front() << endl; // Should print 20
    cout << "Queue size after pop: " << q.getSize() << endl; // Should print 2

    cout << "Popping: " << q.pop() << endl;
    cout << "Popping: " << q.pop() << endl;
    cout << "Queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print Yes

    q.pop(); // Should print "Queue is empty"

}