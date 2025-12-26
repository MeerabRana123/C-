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

// Insert at Head (to create list)
void insertAtHead(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

// Search Function
void search(Node* head, int key) {
    Node* temp = head;
    int position = 1;

    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Value " << key << " found at position " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Value " << key << " not found in the list" << endl;
}

// Print List
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

    // Create linked list
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    cout << "Linked List:\n";
    printList(head);

    // Search values
    search(head, 20);
    search(head, 99);

    return 0;
}
