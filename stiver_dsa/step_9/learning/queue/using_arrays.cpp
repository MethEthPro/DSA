#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    int start ;
    int end ;
    int* arr;
    int size;
    int currsize;

    public:
    Queue(){
        start = -1;
        end = -1;
        size = 10;
        arr = new int[size];
        currsize = 0;
    }

    void push(int x){
        if(currsize >= size){
            cout<<"queue is full cannot push"<<x<<endl;
            return ;
        }
        
        if(currsize == 0){
            start = 0;
            end = 0;
            
        }
        else{
            end = (end + 1) % size;
        }
        arr[end] = x;
        currsize++;
        
    }

    int pop(){
        if(currsize == 0){
            cout<<"queue is empty, cant pop" <<endl;
            return -1;
        }
        int x = arr[start];
        if(currsize == 1){
            start = end = -1;
        }
        else{
            start++;
            start = start % size;
            
        }
        currsize--;
        return x;
    }
    int top(){
        if(currsize == 0){
            cout<<"queue is empty, cant return top element"<<endl;
            return -1;
        }
        return arr[start];
    }

    int getsize(){
        return currsize;
    }



};
int main(){
    Queue qu;
    cout << "Pushing 10, 20, 30" << endl;
    qu.push(10);
    qu.push(20);
    qu.push(30);

    cout << "Front element: " << qu.top() << endl;  // Expected: 10
    cout << "Queue size: " << qu.getsize() << endl; // Expected: 3

    cout << "Popping: " << qu.pop() << endl;  // Expected: 10
    cout << "New front element: " << qu.top() << endl;  // Expected: 20

    qu.push(40);
    cout << "Pushing 40" << endl;
    cout << "New front element: " << qu.top() << endl;  // Expected: 20

    cout << "Popping: " << qu.pop() << endl;  // Expected: 20
    cout << "Popping: " << qu.pop() << endl;  // Expected: 30
    cout << "Popping: " << qu.pop() << endl;  // Expected: 40
    cout << "Popping from empty queue: " << qu.pop() << endl;  // Expected: Error message

    

}