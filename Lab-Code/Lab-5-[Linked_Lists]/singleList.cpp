//
// Created by 70131147 on 10/13/2023.
//

#include <iostream>

using namespace std;


struct Node {
    int data;
    Node *next;
};

Node *head;
Node *tail;

void insert(int X) {

    if (head == nullptr) {

        head = new Node;
        head->data = X;
        head->next = nullptr;

    } else {

        Node *newNode = new Node;
        newNode->data = X;
        newNode->next = nullptr;

        Node *list = head;

        while (list != nullptr) {
            if (list->next == nullptr) {
                list->next = newNode;
                tail = newNode;
                break;
            }
            list = list->next;
        }
    }
}

void addFront(int X) {

    Node *newNode = new Node;
    newNode->data = X;
    newNode->next = head;
    head = newNode;

}

void addBySearch(int X) {

    int value;
    Node *list = head;
    Node *newNode = new Node;

    while (list != nullptr) {
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

void deleteNode(int X) {
    Node *list = head;
    Node *prev = nullptr; // Pointer to the previous node

    while (list != nullptr) {
        if (list->data == X) {
            // Found the node to delete
            if (prev == nullptr) {
                // If the node to delete is the head node
                head = list->next;
            } else {
                // If the node to delete is not the head node
                prev->next = list->next;
            }
            delete list; // Deallocate the memory of the node
            return; // Exit the function after deleting the node
        }
        prev = list;
        list = list->next;
    }

    cout << "Node with value " << X << " not found in the list." << endl;
}

void display() {
    Node *list = head;
    cout << "Linked List Values: ";
    while (list != nullptr) {
        cout << list->data << ", ";
        list = list->next;
    }
    cout << endl;
}

int main() {

    bool close = false;
    int choice;

    int num;
    int value;
    while (!close) {

        cout << "Single Linked List Operations:" << endl;
        cout << "1: Insertion (Old Method)" << endl;
        cout << "2: Insertion (Front Method)" << endl;
        cout << "3: Insertion (Search)" << endl;
        cout << "4: Delete (Search)" << endl;
        cout << "5: Display" << endl;
        cout << "0: Exit" << endl;

        cout << "Enter Choice:";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "How many value you want to enter:";
                cin >> num;
                for (int i = 0; i < num; i++) {
                    cout << "Enter Value:";
                    cin >> value;
                    insert(value);
                }
                break;
            case 2:
                cout << "How many value you want to enter:";
                cin >> num;
                for (int i = 0; i < num; i++) {
                    cout << "Enter Value:";
                    cin >> value;
                    addFront(value);
                }
                break;
            case 3:
                int search;
                cout << "Enter Value to Search:";
                cin >> search;
                addBySearch(search);
                break;
            case 4:
                int deleteValue;
                cout << "Enter Value to Search:";
                cin >> deleteValue;
                deleteNode(deleteValue);
                break;
            case 5:
                display();
                break;
            case 0:
                close = true;
                break;
            default:
                cout << "Invalid Option" << endl;
                break;
        }
        cout << endl;
    }
}