//
// Created by HarisAli on 10/21/2023.
//

#include <iostream>
using namespace std;

struct Stack{
    int data;
    Stack *next;
};

void push(Stack **top, int newData){

    auto *newNode = new Stack;

    newNode->data = newData;
    newNode->next = *top;

    *top = newNode;
}

void pop(Stack **top){

    if (*top == nullptr){
        cout << "Stack is Empty" << endl;
    } else {
        cout<<"The popped element is "<< (*top)->data <<endl;
        Stack *temp = *top;
        *top =  (*top)->next;
        delete temp;
    }
}

void display(Stack **top){

    Stack *display = *top;

    if (display == nullptr){
        cout << "Stack is Empty" << endl;
    } else {
        cout << "Stack Values: ";
        while (display){
            cout << display->data << ", ";
            display = display->next;
        }
        cout << endl;
    }
}
int main(){

    Stack *top = nullptr;

    int choice;
    bool close = false;

    while (!close){

        cout << "----------------------" << endl;
        cout << "Stack with Linked List" << endl;
        cout << "Operations:" << endl;
        cout << "1. Insertion (push)" << endl;
        cout << "2. Deletion (pop)" << endl;
        cout << "3. Display" << endl;
        cout << "0. Close" << endl;
        cout << "----------------------" << endl;
        cout << "Enter Choice:";
        cin >> choice;
        cout << endl;

        switch(choice){

            case 1:
                int value;
                cout << "Enter Value to Enter:";
                cin >> value;
                push(&top, value);
                cout << endl;
                break;
            case 2:
                pop(&top);
                cout << endl;
                break;
            case 3:
                display(&top);
                cout << endl;
                break;
            case 0:
                close = true;
                cout << endl << "Good Bye!" << endl;
                break;

            default:
                cout << "Invalid Option" << endl;
                break;
        }
    }
}

