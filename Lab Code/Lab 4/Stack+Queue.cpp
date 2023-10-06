//
// Created by 70131147 on 10/6/2023.
//

#include <iostream>
using namespace std;

void push(int STACK[], int n, int &TOP){
    int Value;
    cout<< "Enter Value to Insert:";
    cin >> Value;
    if (TOP == n-1){
        cout << "Stack OverFlow" << endl;

    } else {
        TOP++;
        STACK[TOP] = Value;
    }
}
void pop(int STACK[], int n, int &TOP){
    if (TOP == -1) {
        cout << "STACK UnderFlow" << endl;
    } else {
        cout << STACK[TOP] << endl;
        TOP--;
    }

}
void displayStack(int STACK[], int &TOP){
    if (TOP == -1) {
        cout << "STACK UnderFlow" << endl;
    } else {
        for (int i = TOP ; i >= 0; i-- ){
            cout << STACK[i] << ", ";
        }
    }

}

void EnQueue(int Queue[], int &Front, int &Rear, int size){
    int Value;
    cout << "Enter Value to Insert:";
    cin >> Value;
    if (Rear >= size - 1){
        cout << "Queue OverFlow" << endl;
    } else {
        Rear++;
        Queue[Rear] = Value;
    }
}
void DeQueue(int &Front, int &Rear){
    if (Front == Rear){
        cout << "Queue UnderFlow" << endl;
    } else {
        Front++;
    }
}
void displayQueue(int Queue[], int &Front, int &Rear, int size){
    if (Rear == -1 ){
        cout << "Queue UnderFlow" << endl;
    } else {
        for (int i = ++Front; i <= Rear; i++){
            cout << Queue[i] << "," ;

        }
        --Front;
    }
}

int main(){

    int sizeStack = -1;
    int TOP = -1;
    cout << "Enter Size for STACK:";
    cin >> sizeStack;
    int STACK[sizeStack];


    int sizeQueue;
    cout << "Enter Size for Queue:";
    cin >> sizeQueue;
    int Front = -1;
    int Rear = -1;
    int Queue[sizeQueue];


    bool close = false;
    int choice;
    while (!close){
        cout << "STACK Operations:" << endl;
        cout << "1: Push" << endl;
        cout << "2: Pop" << endl;
        cout << "3: Display" << endl;
        cout << "\t\t\t\t\t\t" << endl;
        cout << "QUEUE Operations:" << endl;
        cout << "4: En-Queue " << endl;
        cout << "5: De-Queue" << endl;
        cout << "6: Display" << endl;
        cout << "Enter Choice:";
        cin >> choice;
        switch (choice) {
            case 1:
                push(STACK, sizeStack , TOP);
                break;
            case 2:
                pop(STACK, sizeStack, TOP);
                break;
            case 3:
                displayStack(STACK, TOP);
                break;
            case 4:
                EnQueue(Queue, Front, Rear, sizeQueue);
                break;
            case 5:
                DeQueue(Front, Rear);
                break;
            case 6:
                displayQueue(Queue, Front, Rear, sizeQueue);
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