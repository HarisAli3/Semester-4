//
// Created by haris on 9/30/2023.
//

#include <iostream>
using namespace std;

const int n = 10;
int First = -1;
int Rear = -1;
int Array[n];

void Insert(){
    if (Rear >= n - 1){
        cout << "Queue OverFlow" << endl;
    } else {
        Rear++;
        Array[Rear] = 10;
    }
}

void Delete(){
    if (First && Rear){
        cout << "Queue UnderFlow" << endl;
    } else {
        First++;
    }
}
void Display(){
    for(int i = ++First; i <= Rear; i++){
        cout << Array[i] << endl;
    }
}
int main(){
    Insert();
    Display();
}
