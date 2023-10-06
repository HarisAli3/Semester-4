#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

int isFull() {
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
    return 0;
}

int isEmpty() {
    if (front == -1) return 1;
    return 0;
}

void enQueue(int element) {
    if (isFull()) printf("\n Queue is full!! \n");
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}

int deQueue() {
    int element;
    if (isEmpty()) {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else {
        // element = items[0]
        // element = 10
        element = items[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } /*Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            front = (front + 1) % SIZE;
        }

        printf("\n Deleted element -> %d \n", element);
        return (element);
    }
}

void display() {
    int i;
    if (isEmpty())
        printf(" \n Empty Queue\n");
    else{
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE){
            printf("%d ", items[i]);
        }

        printf("%d ", items[i]);
        printf("\n Rear -> %d \n", rear);
    }
}

int main(){
    deQueue();
    enQueue(1);
    display();

    // Fails because front = -1
/*    deQueue();
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    // Fails to enqueue because front == 0 && rear == SIZE - 1
    enQueue(6);
    display();
    deQueue();
    display();
    enQueue(7);
    display();
    // Fails to enqueue because front == rear + 1
    enQueue(8);*/
    return 0;
}
/*
//
// Created by haris on 10/5/2023.
//

#include <iostream>
using namespace std;
#define SIZE 5
void EnQueue(int Queue[] , int &Front, int &Rear, int Value){
    if ((Front == Rear + 1) || (Front  == 0 && Rear == SIZE - 1 ) ){
        cout << "Queue OverFlow" << endl;
    }
    if (Front == -1){
        Front = 0;
    }
    Rear = (Rear + 1 ) % SIZE;
    cout << "Rear: " << Rear << endl;
    Queue[Rear] = Value;
}

void DeQueue(int Queue[] , int &Front, int &Rear){
    if (Front == -1 ){
        cout << "Queue Empty " << endl;
    } else {
        if (Front == Rear){
            Front = -1;
            Rear = -1;
        } else {
            Front = (Front + 1) % SIZE;
        }
    }

    }

void Display(int Queue[], int &Front, int &Rear){
    if (Front == -1){
        cout << "Queue UnderFlow" << endl;
    } else { // i = 0
        for (int i = Front; i != Rear; i = (i + 1) % SIZE){
            cout << Queue[i] << ", ";
        }
    }
}
int main(){
    int Queue[SIZE];
    int Front = - 1, Rear = -1;
    EnQueue(Queue, Front, Rear, 10);
    EnQueue(Queue, Front, Rear, 20);
    Display(Queue, Front, Rear);
    DeQueue(Queue, Front, Rear);
    Display(Queue, Front, Rear);

}
*/
