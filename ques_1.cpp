#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next; 
    Node(){
        data = 0;
        next = NULL;
    }
};

void linkedListTraversal(Node* head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int isEmpty(Node* head){
    if(head == NULL){
        cout<<"Underflow condition"<<endl;
        return 1;
    }
    else{return 0;}
}

int isFull(Node* head){
    Node* n = new Node;
    if(n == NULL){
        cout<<"Overflow condition"<<endl;
        return 1;
    }
    else{return 0;}
}

Node* insertAtEnd(Node* head, int val){
    if(isFull(head)){
        return 0;
    }

    Node* new_node = new Node;
    new_node-> data = val;
    
    Node* p = head;
    while(p->next != NULL){
        p = p->next;
    }
    p->next = new_node;
    new_node->next = NULL;
    return head;
}

void incrementData(Node* head){
    Node* ptr = head;
    while (ptr!=NULL){
        ptr->data = ptr->data * 10;
        ptr = ptr->next;
    }
}


int main(){
    Node* head = new Node;
    insertAtEnd(head, 12);
    insertAtEnd(head, 13);
    insertAtEnd(head, 14);
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 10);
    insertAtEnd(head, 0);
    insertAtEnd(head, 34);
    insertAtEnd(head, 43);
    insertAtEnd(head, 38);
    insertAtEnd(head, 10);
    insertAtEnd(head, 10);
    insertAtEnd(head, 90);
    insertAtEnd(head, 10);
    insertAtEnd(head, 87);

    cout << "\n\nGiven linked list is : \n\n";
    linkedListTraversal(head);

    cout << "\n\nElements of linked list after multiplying with 10 is : \n\n";
    
    incrementData(head);
    linkedListTraversal(head);
    cout << "\n\n";
    
return 0;
}