//
// Updated by haris on 30/10/2023.
//

#include <iostream>
using namespace std;

#define SIZE 5

void EnQueue(int Queue[] , int &Front, int &Rear, int Value){
    if ((Front == Rear + 1) || (Front  == 0 && Rear == SIZE - 1 ) ){
        cout << "Queue OverFlow" << endl;
        return;
    }
    if (Front == -1){
        Front = 0;
    }
    Rear = (Rear + 1) % SIZE;
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
            cout << "Element Deleted: " << Queue[Front] << endl;
            Front = (Front + 1) % SIZE;
        }
    }

    }

void Display(int Queue[], int Front, int Rear){
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
    Display(Queue, Front, Rear);
    DeQueue(Queue, Front, Rear);


    return 0;

}

