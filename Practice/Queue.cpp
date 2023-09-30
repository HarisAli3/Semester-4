//
// Created by haris on 9/30/2023.
//

#include <iostream>
using namespace std;

const int n = 5;
int First = -1;
int Rear = -1;
int Array[n];

void Insert(int X){
        if (Rear > n - 1){
            cout << "Queue OverFlow" << endl;
        } else {
            Array[++Rear] = X;
    }
}

void Delete(){
    if (First == Rear){
        cout << "Queue UnderFlow" << endl;
    } else {
        First++;
    }
}
void Display(){
    for(int i = ++First; i <= Rear; i++){
        cout << Array[i] << endl;
    }
    --First;
}
int main(){
    Insert(10);
    Display();
    Insert(20);
    Display();
    Insert(30);
    Display();
    Insert(40);
    Display();
    Insert(50);
    Display();
    Insert(60);
    Display();
    Delete();
    cout << "End" << endl;
    Display();
}
