#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* next;
Node* prev;
 
Node(int value){
    data=value;
    next=NULL;
    prev=NULL;
}
};
Node* insertAtBeginning(Node* head, int value){
    Node* newNode = new Node(value);
    newNode->next=head;
    if(head!=NULL)
        head->prev = newNode;
        return newNode;
}
void Traverse(Node*head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main(){
    Node* head = NULL;

    head = insertAtBeginning(head,30);
    head = insertAtBeginning(head,20);
    head = insertAtBeginning(head,15);

    Traverse(head);

    return 0;

}