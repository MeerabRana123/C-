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
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
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

    head = insertAtBeginning(head, 10); // 10 → NULL
     // Insert value 10 at the start of the list, and update head to point to the new first node.”
    head = insertAtBeginning(head, 20); // 20 → 10 → NULL
    head = insertAtBeginning(head, 30); // 30 → 20 → 10 → NULL
// every new element goes at the start of the list

    traverse(head);

    return 0;
}