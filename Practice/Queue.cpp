//
// Created by haris on 9/30/2023.
//

#include <iostream>
using namespace std;

void insertion(int Array[], int n, int &First, int &Rear) {
    int X;
    cout << "Enter Value to Enter";
    cin >> X;

    if (Rear >= n - 1){
        cout << "Queue OverFlow" << endl;
    } else {
        Array[++Rear] = X;
    }
}

void deletion(int Array[], int n, int &First, int &Rear) {
    if (First == Rear){
        cout << "Queue UnderFlow" << endl;
    } else {
        First++;
    }
}

void display(int Array[],int n, int &First, int &Rear) {
    for (int i = ++First; i <= Rear; i++) {
        cout << Array[i] << endl;
    }
    First--;
}

int main(){
    bool close = false;
    int choice;

    int size;
    cout << "Enter Size for Queue:";
    cin >> size;

    int array[size];
    int First = -1;
    int Rear = -1;

    while(!close){
        cout << "Queue Operations:" << endl;
        cout << "1: En-Queue (Insertion)" << endl;
        cout << "2: De-Queue (Deletion)" << endl;
        cout << "3: Display" << endl;
        cout << "0: Close Program" << endl;
        cin >> choice;

        switch (choice){
            case 1:
                insertion(array, size, First, Rear);
                break;
            case 2:
                deletion(array, size, First, Rear);
                break;
            case 3:
                display(array, size, First, Rear);
                break;
            case 0:
                close = true;
                break;

        }
    }
    return 0;

}
