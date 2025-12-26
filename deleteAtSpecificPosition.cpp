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

// Insert at Head
void insertAtHead(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

// Delete at Position (1-based index)
void deleteAtPosition(Node* &head, int position) {
    // Case 1: Empty list
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }

    // Case 2: Delete first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Case 3: Delete middle or last node
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }

    // Invalid position
    if (temp->next == nullptr) {
        cout << "Invalid position\n";
        return;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
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

    // Insert nodes
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    cout << "Original List:\n";
    printList(head);

    // Delete node at position
    deleteAtPosition(head, 3);

    cout << "List after deleting node at position 3:\n";
    printList(head);

    return 0;
}
