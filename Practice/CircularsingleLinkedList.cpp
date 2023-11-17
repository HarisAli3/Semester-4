//
// Created by haris on 10/21/2023.
//

#include <iostream>
using namespace std;

struct Node {
    float data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insert(float X) {

    Node* newNode = new Node;
    newNode->data = X;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        head->next = head;
    } else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}

void searchByValue(float X){

    Node* list = head;
    bool found = false;
    int count = 0;
    while (list != nullptr) {
        if (list->data == X) {
            found = true;
            break;
        }
        count++;
        list = list->next;
        if (list == head){
            break;
        }
    }
    if (found){
        cout << "Value " << X << " found at position " << count << endl;
    } else {
        cout << "Value " << X << " not found in the list." << endl;
    }
}

void addbySearch(float X) {
    float value;
    Node* list = head;
    Node* newNode = new Node;
    while (list != nullptr) {
        if (list->data == X) {
            cout << "Enter Value to Enter:";
            cin >> value;

            newNode->data = value;
            newNode->next = list->next;
            list->next = newNode;
            if (list == tail) {
                tail = newNode;
            }
            break;
        }
        list = list->next;
    }
}

void deleteNode(float X) {
    Node* list = head;
    Node* prev = nullptr;

    if (list == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    do {
        if (list->data == X) {
            if (list == head) {
                head = list->next;
                tail->next = head;
                if (head == nullptr) {
                    tail = nullptr;
                }
            } else {
                prev->next = list->next;
                if (list == tail) {
                    tail = prev;
                }
            }
            delete list;
            return;
        }
        prev = list;
        list = list->next;
    } while (list != head);

    cout << "Node with value " << X << " not found in the list." << endl;
}

void display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* list = head;
    do {
        cout << list->data << ", ";
        list = list->next;
    } while (list != head);
    cout << endl;
}

int main() {
    bool close = false;
    int choice, num;
    float value;

    while (!close) {
        cout << "Circular Linked List Operations:" << endl;
        cout << "1: Insertion (Old Method)" << endl;
        cout << "2: Insertion (Search)" << endl;
        cout << "3: Search Value" << endl;
        cout << "4: Delete Value" << endl;
        cout << "5: Display" << endl;
        cout << "0: Exit" << endl;
        cout << "Enter Choice:";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "How many values do you want to enter: ";
                cin >> num;
                for (int i = 0; i < num; i++) {
                    cout << "Enter Value: ";
                    cin >> value;
                    insert(value);
                }
                break;
            case 2:
                float search;
                cout << "Enter Value to Search: ";
                cin >> search;
                addbySearch(search);
                break;
            case 3:
                float searchValue;
                cout << "Enter Value to Search: ";
                cin >> searchValue;
                searchByValue(searchValue);
                break;
            case 4:
                float deleteValue;
                cout << "Enter Value to Delete: ";
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

    return 0;
}
