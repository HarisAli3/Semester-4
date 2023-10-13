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
void addFront(int X){
    Node *newNode = new Node;
    newNode->data = X;
    newNode->next = head;
    head = newNode;
}

void addbySearch(int X){
    int value;
    Node *list = head;
    Node *newNode = new Node;
    while (list){
        if (list->data == X) {

            cout << "Enter Value to Enter:";
            cin >> value;

            Node *y = list->next;
            list->next = newNode;
            newNode->next = y;

            newNode->data = value;
            list->next = newNode;

            break;
        }
        list = list->next;
    }
}

void display(){
    Node *list = head;
    cout << "Value: ";
    while (list){
        cout << list->data << ", ";
        list = list->next;
    }
    cout << endl;
}

int main(){

    bool close = false;
    int choice;

    int num;
    int value;
    while (!close){
        cout << "Single Linked List Operations:" << endl;
        cout << "1: Insertion (Old Method)" << endl;
        cout << "2: Insertion (Front Method)" << endl;
        cout << "3: Insertion (Search)" << endl;
        cout << "4: Display" << endl;
        cout << "0: Exit" << endl;
        cout << "Enter Choice:";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "How many value you want to enter:";
                cin >> num;
                for (int i = 0; i < num; i++){
                    cout << "Enter Value:";
                    cin >> value;
                    insert(value);
                }
                break;
            case 2:
                cout << "How many value you want to enter:";
                cin >> num;
                for (int i = 0; i < num; i++){
                    cout << "Enter Value:";
                    cin >> value;
                    addFront(value);
                }
                break;
            case 3:
                int search;
                cout << "Enter Value to Search:";
                cin >> search;
                addbySearch(search);
                break;
            case 4:
                display();
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