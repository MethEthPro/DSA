#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    stack<pair<int,int>> st;

public:
    Stack(){

    }
    void push(int x){
        if(st.empty()){
            st.push({x,x});
        }
        else{
            st.push({x,min(x,st.top().second)});
        }
    }

    int top(){
        if(st.empty()) return -1;
        return st.top().first;
    }
    void pop(){
        if(st.empty()) return ;
        st.pop();
    }

    int getmin(){
        if(st.empty()) return -1;
        return st.top().second;
    }

};

int main(){

    Stack s;
    
    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);
    
    cout << "Minimum: " << s.getmin() << endl; // Should print 1
    cout << "Top: " << s.top() << endl; // Should print 1
    s.pop();
    cout << "New Minimum: " << s.getmin() << endl; // Should print 2
    s.pop();
    cout << "Top: " << s.top() << endl; // Should print 2

}