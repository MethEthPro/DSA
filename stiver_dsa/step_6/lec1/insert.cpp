#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arrtoLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

// insertion at head
Node* insertionHead(Node* head, int val){
    Node* newhead = new Node(val,head);
    return newhead;
}

// insertion at tail
Node* insertionTail(Node* head, int val){
    if(head==nullptr) return new Node(val,head);

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* last = new Node(val);
    temp->next = last;

    return head;
}

// insertion at Kth position , K is between 1(head) and N+1(tail)
Node* insertK(Node* head, int val, int k){
    if(head==nullptr) return new Node(val);

    if(k==1){
        Node* start = new Node(val, head);
        return start;
    }

    Node* temp = head;
    Node* prev = nullptr;
    int cnt = 0;
    while(temp->next != nullptr){
        cnt++;
        if(cnt == (k-1)){
            Node* newnode = new Node(val, temp->next);
            temp->next = newnode;
            break;
        }
        temp = temp->next;
    }
    return head;

}

// insertion of val , before an element with value x
Node* insertbeforex(Node* head, int val, int x){
    if(head==nullptr) return nullptr;

    if(head->data == x) return new Node (val,head);

    Node* temp = head;
    while(temp->next != nullptr){
        if(temp->next->data == x){
            Node* newnode = new Node(val, temp->next);
            temp->next = newnode;
            break;

        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {13,43,55,2};
    Node* head = arrtoLL(arr);
    printLL(head);
    int x = 2;
    cout<<"for x: "<<x<<endl;
    Node* newhead = insertbeforex(head, 5, x);
    printLL(newhead);

}