//
// Created by 70131147 on 10/13/2023.
//
// structure , at end of list
// display

#include <iostream>
using namespace std;


struct Node{
    int data;
    Node* next;
};
    Node* head;
    Node *tail;

void insert(int X){

    if (head == nullptr) {
        head = new Node;
        head->data = X;
        head->next = nullptr;
    }
    else {
        Node* newNode = new Node;
        newNode->data = X;
        newNode->next = nullptr;

        Node *list = head;
        while (list ){
            if (list->next == nullptr){

                list->next = newNode;
                tail = newNode;
                break;
            }
            list = list->next;
        }
    }
}

void display(){
    Node *list = head;
    cout << "Value: ";
    while (list){
        cout << list->data << ", ";
        list = list->next;
    }
}

int main(){

    bool close = false;
    int choice;
    while (!close){
        cout << "Single Linked List Operations:" << endl;
        cout << "1: Insertion" << endl;
        cout << "2: Display" << endl;
        cout << "Enter Choice:";
        cin >> choice;
        switch (choice) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 0:
                close = true;
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
        }
    }

}