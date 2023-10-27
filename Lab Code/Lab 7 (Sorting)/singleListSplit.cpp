//
// Created by 70132579 on 10/27/2023.
//

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* list1;
Node* list2;

void insert(int X){

    if (list1 == nullptr) {
        list1 = new Node;
        list1->data = X;
        list1->next = nullptr;
    }
    else {
        Node* newNode = new Node;
        newNode->data = X;
        newNode->next = nullptr;

        Node *list = list1;

        while (list != nullptr ){
            if (list->next == nullptr){
                list->next = newNode;
                break;
            }
            list = list->next;
        }
    }
}

void split(int X){

    Node *temp1 = list1;

    while (temp1){
        if (temp1->data == X){
            cout << "Value Found:" << X << endl;

            list2 = temp1->next;
            temp1->next = nullptr;

            break;
        }
        cout << "Data: " << temp1->data << endl;
        temp1 = temp1->next;
    }
}

void display(){
    Node *temp = list1;
    cout << endl << "List 1: ";
    while (temp != nullptr){
        cout << temp->data << ",";
        temp = temp->next;
    }
    cout << endl;
}
void display2(){
    Node *temp = list2;
    cout << endl << "List 2: ";
    while (temp != nullptr){
        cout << temp->data << ",";
        temp = temp->next;
    }
}

int main(){
    insert(5);
    insert(3);
    insert(10);
    insert(7);
    insert(0);
    insert(9);
    insert(2);
    insert(11);
    insert(12);
    display();
    split(0);
    display();
    display2();

}