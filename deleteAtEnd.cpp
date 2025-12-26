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
Node* insertAtHead(Node* head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    return newNode;
}

// Delete at End
Node* deleteAtEnd(Node* head) {
    // Case 1: Empty list
    if (head == nullptr) {
        return nullptr;
    }

    // Case 2: Single node
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    // Case 3: More than one node
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;      // delete last node
    temp->next = nullptr;  // unlink
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

    // Delete last node
    head = deleteAtEnd(head);

    cout << "List after deleting last node:\n";
    printList(head);

    return 0;
}
