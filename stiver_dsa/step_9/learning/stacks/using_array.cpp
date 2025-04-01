#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int size; // Maximum size of the stack
    int* arr; // Pointer to a dynamically allocated array
    int top; // Index of the top element in the stack
    
    public:
        Stack(){
            top = -1;
            size = 1000;
            arr = new int[size]; // Dynamically allocate an array of size 1000
        }

    void push(int x){
        if(top>=size-1) {
            cout<<"storage size exceeded cant push"<<endl;
        }
        else {
            top++;
            arr[top] = x;
        }
    }    
    int getTop(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int pop(){
        if(top==-1){
            cout<<"stack underflow, cant pop"<<endl;
            return -1;
        }
        int x = arr[top];
        top -- ;
        return x;
    }
    int getSize(){
        return top+1;
    }
};

int main(){
    Stack st;
    st.push(3);
    st.push(4);
    st.push(8);
    cout << "Top element: " << st.getTop() << endl;
    cout << "Popped: " << st.pop() << endl;
    cout << "Size: " << st.getSize() << endl;
    st.push(9);
    cout << "Top element: " << st.getTop() << endl;
    cout << "Popped: " << st.pop() << endl;
    cout << "Top element: " << st.getTop() << endl;

}