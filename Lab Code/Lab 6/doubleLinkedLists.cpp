//
// Created by 70132579 on 10/20/2023.
//

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

void insert_end(Node **head, int newData){
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->prev = *head;
    newNode->next = nullptr;
    if (*head == nullptr){
        *head = newNode;
        newNode->prev = nullptr;
        return;
    }
    Node *temp = *head;
    while (temp->next != nullptr){
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

void display(Node **head){
    Node *list = *head;
    while (list){
        cout << "Data: " << list->data << endl;
        list = list->next;
    }
}
int main(){
    Node *list1 = nullptr;
    insert_end(&list1, 2);
    insert_end(&list1, 5);
    insert_end(&list1, 8);
    cout << "Double Linked List 1:" << endl;
    display(&list1);

    Node *list2 = nullptr;
    insert_end(&list2, 1);
    insert_end(&list2, 6);
    insert_end(&list2, 10);
    insert_end(&list2, 13);
    cout << "Double Linked List 2:" << endl;
    display(&list2);

}
