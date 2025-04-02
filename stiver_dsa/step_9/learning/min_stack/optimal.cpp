#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{

public:
    stack<int> st;
    int minval;

public:
    Stack(){
        minval = INT_MAX;
    }

    void push(int x){
        if(st.empty()){
            st.push(x);
            minval = x;
        }
        else{
            if(x >= minval){
                st.push(x);
            }
            else{
                int newval = 2*x - minval;
                st.push(newval);
                minval = x;
            }
        }
    }

    void pop(){
        if(st.empty()) return ;

        int lastval = st.top();
        st.pop();
        if(lastval < minval){
            minval = 2*minval - lastval;
        }
        
    }

    int top(){
        if(st.empty()) return -1;
        int lastval = st.top();
        if(lastval >= minval) return lastval;
        else{
            return minval;
        }
    }

    int getminval(){
        if(st.empty()) return -1;
        return minval;
    }
    
};

int main(){
    Stack s;

    s.push(5);
    s.push(2);
    s.push(8);
    s.push(1);

    cout << "Minimum: " << s.getminval() << endl; // Should print 1
    cout << "Top: " << s.top() << endl; // Should print 1
    s.pop();
    cout << "New Minimum: " << s.getminval() << endl; // Should print 2
    
    cout << "Top: " << s.top() << endl; // Should print 2

    return 0;


}