# Test

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
        while (display != nullptr){
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

    cout << "Stack with Linked List" << endl;

    while (!close){

        cout << "Operations:" << endl;
        cout << "1. Insertion (push)" << endl;
        cout << "2. Deletion (pop)" << endl;
        cout << "3. Display" << endl;
        cout << "0. Close" << endl;
        cout << "Enter Choice:";
        cin >> choice;

        switch(choice){

            case 1:
                int value;
                cout << "Enter Value to Insert:";
                cin >> value;
                push(&top, value);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                display(&top);
                break;
            case 0:
                close = true;
                cout << endl << "Good Bye!" << endl;
                break;

            default:
                cout << "Invalid Option" << endl;
                break;
        }
        cout << endl;
    }
}

