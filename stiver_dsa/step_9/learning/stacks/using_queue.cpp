#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Stack{
public:    
    queue<int> q;

public:
    void push(int x){
        
        q.push(x);
        int s = q.size();

        for(int i=0;i<s-1;i++){
            q.push(q.front());
            q.pop();
        }
    }    

    int pop(){
        if(q.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        int n = q.front();
        q.pop();
        return n;
    }

    int top(){
        if(q.empty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return q.front();
    }

    int getsize(){
        return q.size();
    }
};
int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Should print 30
    cout << "Stack size: " << s.getsize() << endl; // Should print 3

    cout << "Popping: " << s.pop() << endl; // Should print 30
    cout << "New top: " << s.top() << endl; // Should print 20
    cout << "Stack size after pop: " << s.getsize() << endl; // Should print 2

    cout << "Popping: " << s.pop() << endl;
    cout << "Popping: " << s.pop() << endl;
    cout << "Stack empty? " << (s.getsize() == 0 ? "Yes" : "No") << endl; // Should print Yes

    s.pop(); // Should print "Stack is empty"

}