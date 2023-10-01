//
// Created by haris on 9/30/2023.
//

#include <iostream>
using namespace std;

void insertion(int Array[], int n, int &Rear) {
    int number;
    cout << "How many Values you want to enter?";
    cin >> number;
    for (int i = 0 ; i < number; i++){
        if (Rear >= n - 1){
            cout << "Queue OverFlow" << endl;
        } else {
            int X;
            cout << "Enter Value to Enter:";
            cin >> X;
            Array[++Rear] = X;
        }
    }
}

void deletion(int &First, int &Rear) {
    if (First == Rear){
        cout << "Queue UnderFlow" << endl;
    } else {
        First++;
    }
}

void display(int Array[], int &First, int &Rear) {

    for (int i = ++First; i <= Rear; i++) {
        cout << Array[i] << endl;
    }
    First--;
}

int main(){

    int size;
    cout << "Enter Size for Queue:";
    cin >> size;
    int array[size];

    int First = -1;
    int Rear = -1;

    bool close = false;
    int choice;

    while(!close){

        cout << "Queue Operations:" << endl;
        cout << "1: En-Queue (Insertion)" << endl;
        cout << "2: De-Queue (Deletion)" << endl;
        cout << "3: Display" << endl;
        cout << "4: Show First and Rear Value" << endl;
        cout << "0: Close Program" << endl;
        cout << "Choice:";

        cin >> choice;

        switch (choice) {

            case 1:
                insertion(array, size, Rear);
                break;
            case 2:
                deletion(First, Rear);
                break;
            case 3:
                display(array, First, Rear);
                break;
            case 4:
                cout << "First: " << First << endl;
                cout << "Rear: " << Rear << endl;
                break;
            case 0:
                close = true;
                break;
            default:
                cout << "You Entered Invalid Option" << endl;
                break;

        }
    }
    return 0;

}
