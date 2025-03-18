#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1,
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

Node* arraytoDLL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr,nullptr);
    Node* temp = head;
    for(int i = 1; i<arr.size(); i++){
        Node* x = new Node(arr[i], nullptr, temp);
        temp->next = x;
        temp = x;
    }

    return head;
}

void printDLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {12,23,45,11};

    Node* head = arraytoDLL(arr);

    printDLL(head);

}