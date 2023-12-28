#include <iostream>
using namespace std;

struct Node{
    int num;
    Node* next;

    Node(int d){
        num = d;
        next = nullptr;
    }
};

void insert(Node *&head, int num){

    Node *newNode = new Node(num);

    if (head == nullptr){
        head = newNode;
        newNode->next = head;
    } else {
        Node *temp = head;
        while (temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void display(Node*& head){
    Node *temp = head;
    if (temp == nullptr){
        cout << "No Data Found" << endl;
    }  else {
        cout << "Linked List Data: ";
        do {
            cout << temp->num << ", ";
            temp = temp->next;
        } while (temp != head);
    }
}

void deletion(Node *&head, int num){

    if (head == nullptr){
        cout << "No Data Found" << endl;
        return;
    }

    Node *temp = head;
    Node *parent = head;

    while (temp){
        if (temp->num == num){
            Node *deleteNode = temp;
            parent->next = temp->next;
            delete deleteNode;
            break;
        }
        parent = temp;
        temp = temp->next;
    }
}

int main(){
    Node *head = nullptr;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    deletion(head, 20);
    insert(head, 40);
    display(head);
}
