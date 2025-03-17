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
    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}


// deletion at head
Node* deleteHead(Node* head){
    if(head==nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// deletion at tail
Node* deleteTail(Node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;

}

// deletion at Kth position
Node* deleteK(Node* head, int k){
    if(head==nullptr || head->next==nullptr) return nullptr;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        cnt++;
        if(cnt==k){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

// deleteion of a value
Node* deleteVal(Node* head, int val){
    if(head==nullptr) return nullptr;
    if(head->next==nullptr && head->data==val) return nullptr;

    Node* temp = head;
    if(temp->data==val){
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = nullptr;
    while(temp != nullptr){
        if(temp->data == val){
            prev->next = temp->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
int main(){
    vector<int> arr = {12,15,46,2};
    Node* head = arrtoLL(arr);
    printLL(head);
    int val = 25;
    cout<<"for val: "<<val<<endl;
    Node* newhead = deleteVal(head,val);
    printLL(newhead);



}