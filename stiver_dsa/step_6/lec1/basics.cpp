#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:    
    int data;
    Node* next;

    public:    
    // constructor when the next is not null pointer 
    Node(int data1, Node* next1){
        data = data1;
        next =  next1;
    }

    // constructor when the next is not given , i.e it is null ptr

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

// function to convert array to LL , which return the head of LL
Node* ConvertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

// LL traversal and size

void LL_traversal_and_size(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
        cnt++;
    }
    cout<<"length of LL is "<<cnt<<endl;
}

// search in a LL

bool LL_search(Node* head, int val){
    Node* temp = head;
    while(temp!=nullptr){
        if(val == temp->data) return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> arr = {23,43,12,19};

    Node* head = ConvertArr2LL(arr);

    LL_traversal_and_size(head);
    cout<<LL_search(head, 43)<<endl;
}