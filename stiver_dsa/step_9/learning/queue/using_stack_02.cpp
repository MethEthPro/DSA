#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
// use this if more number of push operations
public:
    stack<int> S1,S2;
    
public:
        void push(int x){
            S1.push(x);
        }

        int top(){
            if(!S2.empty()){
                return S2.top();
            }
            else{
                while(! S1.empty()){
                    S2.push(S1.top());
                    S1.pop();
                }

                if (!S2.empty()) {
                    return S2.top();
                }
            }
            cout << "Queue is empty" << endl;
            return -1;

        }

        void pop(){
            if(! S2.empty()){
                S2.pop();
            }
            else{
                while(! S1.empty()){
                    S2.push(S1.top());
                    S1.pop();
                }
                if (!S2.empty()) {
                    S2.pop();
                } else {
                    cout << "Queue is empty" << endl;
                }
            }
        }
        

};



int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.top() << endl; // Should print 10

    q.pop();
    cout << "Front after pop: " << q.top() << endl; // Should print 20


    q.pop();
    q.pop();

    q.pop(); // Should print "Queue is empty"

}