#include <iostream>
using namespace std;

struct Queue {
    float data;
    Queue *next;
};

void enQueue(Queue **front, Queue **rear, float newData){

    auto *newNode = new Queue;

    newNode->data = newData;
    newNode->next = nullptr;

    if (*rear == nullptr){
        *rear = newNode;
        *front = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
}

void deQueue(Queue **front, Queue **rear){

    if (*front == nullptr){
        cout << "Queue UnderFlow" << endl;
    } else {
    Queue *temp = *front;
    *front = (*front)->next;

    if (*front == nullptr) {
        *rear = nullptr;
    }
    cout<<"The deleted element is "<< temp->data <<endl;
    delete temp;
    }
}

void display(Queue** front, Queue** rear) {
    if (*front == nullptr) {
        cout << "Queue UnderFlow" << endl;
    } else {
        Queue* list = *front;
        cout << "Queue Data: ";
        while (list) {
            cout << list->data;
            if (list->next != nullptr) {
                cout << ", ";
            }
            list = list->next;
        }
        cout << endl;
    }
}

int main(){

    Queue *front = nullptr;
    Queue *rear = nullptr;

    int choice;
    bool close = false;

    cout << "Queue with Single Linked List" << endl;

    while (!close){

        cout << "Operations:" << endl;
        cout << "1. EnQueue " << endl;
        cout << "2. DeQueue " << endl;
        cout << "3. Display" << endl;
        cout << "0. Close" << endl;
        cout << "Enter Choice:";
        cin >> choice;

        switch(choice){

            case 1:
                float value;
                cout << "Enter Value to Enter:";
                cin >> value;
                enQueue(&front, &rear, value);
                break;
            case 2:
                deQueue(&front, &rear);
                break;
            case 3:
                display(&front, &rear);
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
    return 0;
}

