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

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    Node* head = NULL;

    head = insertAtEnd(head, 10);  //10 → NULL
    head = insertAtEnd(head, 20);  //20 → 10 → NULL
    head = insertAtEnd(head, 30);  //30 → 20 → 10 → NULL

    traverse(head);   // ← THIS prints the list
    return 0;

}