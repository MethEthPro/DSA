#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
// use this if more no of top and pop commands
public:
    stack<int> S1,S2;
    
public:
        void push(int x){
            //  transferring everything from stack 1 to stack 2
            while(S1.size()){
                S2.push(S1.top());
                S1.pop();
            }

            // adding new element to stack 1
            S1.push(x);

            // transferring everything from stack 2 to stack 1

            while(S2.size()){
                S1.push(S2.top());
                S2.pop();
            }
        }

        int top(){
            if (S1.empty()) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return S1.top();
        }

        void pop(){
            if (S1.empty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            S1.pop();   
        }
        int getSize(){
            return S1.size();
        }

        bool isEmpty() {
            return S1.empty();
        }

};



int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.top() << endl; // Should print 10
    cout << "Queue size: " << q.getSize() << endl;  // Should print 3

    q.pop();
    cout << "Front after pop: " << q.top() << endl; // Should print 20
    cout << "Queue size after pop: " << q.getSize() << endl; // Should print 2

    q.pop();
    q.pop();
    cout << "Queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Should print Yes

    q.pop(); // Should print "Queue is empty"

}