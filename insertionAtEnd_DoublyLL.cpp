#include<iostream>
using namespace std;
class Node {
    public : 
    int data;
    Node* next;
    Node* prev;
Node(int value){
    data = value;
    next = NULL;
    prev = NULL;
}
};
Node* insertAtEnd(Node* head, int value){
    Node* newNode = new Node(value);
/// if list is empty 
    if (head == NULL) {
        return newNode;
    }
    Node* temp = head;
    while(temp->next !=NULL ){
        temp=temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    
    return head;

}
void Traverse(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head = NULL;

    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30);
    head = insertAtEnd(head,40);
    head = insertAtEnd(head,50);

    Traverse(head);

    return 0;


}