#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int v) {
        data = v;
        next = nullptr;
    }
};

//Insert at Head
Node* insertAtHead(Node* head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    return newNode;   // new head
}

// Delete at Head function
Node* deleteAtHead(Node* head) {
    if (head == nullptr) {
        cout << "List is empty. ";
        return nullptr;
    }

    Node* temp = head;      
    head = head->next;    
    delete temp;            

    return head;      
}

// Print Linked List
void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;

    // Insert at head
    head = insertAtHead(head, 10);
    head = insertAtHead(head, 20);
    head = insertAtHead(head, 30);

    cout << "List after insertion:\n";
    printList(head);

    head = deleteAtHead(head);

    cout << "List after deleting front node:\n";
    printList(head);

    return 0;
}