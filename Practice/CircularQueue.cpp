//
// Updated by haris on 30/10/2023.
//

#include <iostream>
using namespace std;

#define SIZE 10


void EnQueue(int Queue[] , int &Front, int &Rear, int Value) {
    if ((Front == Rear + 1) || (Front  == 0 && Rear == SIZE - 1 ) ){
        cout << Value << " can't be inserted." << endl;
        cout << "Queue OverFlow" << endl;
        return;
    }
    if (Front == -1){
        Front = 0;
    }
    Rear = (Rear + 1) % SIZE;
    Queue[Rear] = Value;
}

void DeQueue(int Queue[] , int &Front, int &Rear) {
    if (Front == -1 ){
        cout << "Queue Empty " << endl;
    } else {
        if (Front == Rear){
            Front = -1;
            Rear = -1;
        } else {
            cout << "Element Deleted: " << Queue[Front] << endl;
            Front = (Front + 1) % SIZE;
        }
    }
}

void Display(int Queue[], int Front, int Rear) {
    //Fix this code
    if (Front == -1){
        cout << "Queue UnderFlow" << endl;
    } else {
        int i;
        cout << "Queue Elements: ";
        for (i = Front; i != Rear; i = (i + 1) % SIZE){
            cout << Queue[i] << ", ";
        }
        cout << Queue[i] << endl;

    }
}
int main(){

    int Queue[SIZE];

    int Front = - 1, Rear = -1;

    EnQueue(Queue, Front, Rear, 10);
    EnQueue(Queue, Front, Rear, 100);
    EnQueue(Queue, Front, Rear, 200);
    EnQueue(Queue, Front, Rear, 300);
    EnQueue(Queue, Front, Rear, 400);
    EnQueue(Queue, Front, Rear, 500);
    EnQueue(Queue, Front, Rear, 600);
    EnQueue(Queue, Front, Rear, 700);
    EnQueue(Queue, Front, Rear, 800);
    EnQueue(Queue, Front, Rear, 900);
    EnQueue(Queue, Front, Rear, 1000);

    Display(Queue, Front, Rear);

    DeQueue(Queue, Front, Rear);

    Display(Queue, Front, Rear);

    // Output for this code
    // Queue Elements: 10, 100, 200, 300, 400, 500, 600, 700, 800, 900
    // Element Deleted: 10
    // Queue Elements: 100, 200, 300, 400, 500, 600, 700, 800, 900

    return 0;

}

