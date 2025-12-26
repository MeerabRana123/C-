#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* next;

Node(int value){
    data=value;
    next=NULL;
}

};
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);

    // Case 1: List is empty
    if (head == NULL) {
        return newNode;
    }

    // Case 2: List is not empty
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}


Node* insertAtPosition(Node* head, int value, int pos) {

    // Case 1: Insert at beginning
    if (pos == 1) {
        Node* newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    // Move temp to (pos-1)th node
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp == NULL) {
        cout << "Invalid position\n";
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void traverse(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;          // start empty list

   head = insertAtEnd(head, 10);
head = insertAtEnd(head, 20);
head = insertAtEnd(head, 30);

head = insertAtPosition(head, 15, 2);

    traverse(head);

    return 0;
}