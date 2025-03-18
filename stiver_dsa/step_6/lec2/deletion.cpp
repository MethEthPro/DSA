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
    for(int i=1;i<arr.size();i++){
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

Node* deleteHead(Node* head){
    Node* temp = head;

    // edge case , if the DLL is empty or has only 1 element
    if(temp==nullptr || temp->next ==nullptr) return nullptr;

    Node* newhead = temp->next;
    newhead->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return newhead;
}

Node* deleteTail(Node* head){
    Node* temp = head;

    if(temp==nullptr || temp->next == nullptr) return nullptr;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newtail = temp->back;
    newtail->next = nullptr;
    temp->back = nullptr;

    delete temp;
    return head;
}

Node* deleteKth(Node* head, int k){
    Node* temp = head;
    if(temp == nullptr ) return nullptr;

    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prevnode = temp->back;
    Node* nextnode = temp->next;
    if(prevnode == nullptr && nextnode == nullptr){
        return nullptr;
    }
    else if(prevnode == nullptr){
        return deleteHead(head);
    }
    else if(nextnode == nullptr){
        return deleteTail(head);
    }

    prevnode->next = nextnode;
    nextnode->back = prevnode;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;
    return head;



}

Node* deleteNodeWithVal(Node* head, int val){
    Node* temp = head;
    if(head == nullptr) return nullptr;

    while(temp != nullptr){
        if(temp->data == val) break;

        temp=temp->next;
    }

    Node* prevnode = temp->back;
    Node* nextnode = temp->next;

    if(prevnode == nullptr && nextnode == nullptr) return nullptr;

    else if(prevnode == nullptr) return deleteHead(head);

    else if(nextnode == nullptr) return deleteTail(head);

    prevnode->next = nextnode;
    nextnode->back = prevnode;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;
}


// the node to be deleted is not head , i.e temp != head
void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;


    // if the node to be deleted is the tail
    if(front == nullptr){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    delete temp;
    

}
int main(){
    vector<int> arr = {12,23,45,11};

    Node* head = arraytoDLL(arr);
    printDLL(head);

    deleteNode(head->next);
    printDLL(head);
    return 0;

}