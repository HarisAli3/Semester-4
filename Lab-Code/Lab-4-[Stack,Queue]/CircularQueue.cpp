//
// Created by haris on 10/7/2023.
//

#include <iostream>

using namespace std;

int Front = -1, Rear = -1;
#define SIZE 5
int Queue[SIZE];

void EnQueue(int Value) {
    if ((Front == Rear + 1) || (Front == 0 && Rear == SIZE - 1)) {
        cout << "Queue OverFlow" << endl;
    } else {
        if (Front == -1) {
            Front = 0;
        }
        Rear = (Rear + 1) % SIZE;
        cout << "Rear Value: " << Rear << endl;
        Queue[Rear] = Value;
    }
}

void DeQueue() {
    if (Front == -1) {
        cout << "Queue UnderFlow" << endl;
    } else {
        if (Front == Rear) {
            Front = -1;
            Rear = -1;
        } else {
            Front = (Front + 1) % SIZE;
        }
    }
}

void display() {
    int i;
    cout << "Calling Display" << endl;
    cout << "Front: " << Front << endl;
    cout << "Rear: " << Rear << endl;
    if (Front == -1) {
        cout << "Queue UnderFlow" << endl;
    } else {
        for (i = Front; i != Rear; i = (i + 1) % SIZE) {
            cout << Queue[i] << ", ";
        }
        cout << Queue[i] << endl;
    }
}

int main() {
    DeQueue();
    EnQueue(10);
    display();
    EnQueue(20);

/*
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);
    display();
    DeQueue();
    EnQueue(60);
    display();*/

}
