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
        data = data1;
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
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i =1;i<arr.size();i++){
        Node* a = new Node(arr[i], nullptr, temp);
        temp->next = a;
        temp = a;
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

Node* insertionBeforeHead(Node* head, int val){
    Node* temp = head;
    Node* newhead = new Node(val, head, nullptr);
    temp -> back = newhead;
    return newhead;
}

Node* insertionBeforeTail(Node* head, int val){
    Node* temp = head;
    if(temp->next == nullptr) insertionBeforeHead(head, val);
    while(temp->next != nullptr){
        temp = temp->next; 
    }
    Node* prev = temp->back;
    Node* a = new Node(val, temp, prev);
    prev->next = a;
    temp->back = a;
    return head;
} 

Node* insertionBeforeKthNode(Node* head, int val,int k){
    if(k==1) insertionBeforeHead(head,val);

    Node* temp = head;
    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        if(k==cnt) break; 
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* a = new Node(val, temp, prev);
    prev->next = a;
    temp->back = a;
    return head;
}


// inserting before a given node
// and that node cam not be head

void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newnode = new Node(val, node, prev);

    prev->next = newnode;
    node->back = newnode;
}
int main(){
    vector<int> arr = {12,45,32,11};

    Node* head = arraytoDLL(arr);
    printDLL(head);

    insertBeforeNode(head->next, 10);
    printDLL(head);

}