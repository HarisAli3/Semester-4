//
// Created by 70131147 on 10/20/2023.
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

    if (*head == nullptr){
        cout << "Empty List" << endl;
        return;
    }
    while (list != nullptr){
        cout << "Data: " << list->data << endl;
        list = list->next;
    }
}

void merge_list(Node **list1, Node **list2, Node **list3){

    Node *temp1 = *list1;
    Node *temp2 = *list2;

    while (temp1 != nullptr && temp2 != nullptr){
        if (temp1->data > temp2->data){
            insert_end(list3, temp2->data);
            temp2 = temp2->next;
        } else {
            insert_end(list3, temp1->data);
            temp1 = temp1->next;
        }
    }

    while(temp1 == nullptr && temp2 != nullptr){
        insert_end(list3, temp2->data);
        temp2 = temp2->next;
    }

    while(temp1 != nullptr && temp2 == nullptr){
        insert_end(list3, temp1->data);
        temp1 = temp1->next;
    }
}

int main(){

    Node *list1 = nullptr;
    insert_end(&list1, 2);
    insert_end(&list1, 5);
    insert_end(&list1, 8);
    insert_end(&list1, 13);
    cout << "Double Linked List 1:" << endl;
    display(&list1);

    Node *list2 = nullptr;
    insert_end(&list2, 1);
    insert_end(&list2, 6);
    insert_end(&list2, 10);
    cout << "Double Linked List 2:" << endl;
    display(&list2);

    Node *list3 = nullptr;
    merge_list(&list1, &list2, &list3);
    cout << "Double Linked List 3:" << endl;
    display(&list3);

}
