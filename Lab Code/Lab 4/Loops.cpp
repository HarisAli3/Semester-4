//
// Created by 70131147 on 10/6/2023.
//
#include <iostream>
using namespace std;

int main(){
    int X, Y;
    cout << "Enter Number to Print Table:";
    cin >> X;
    cout << "How much :";
    cin >> Y;
    for (int i = 1 ; i <= 10; i++){
        cout << X << " * " << i << " = " << X * i << endl;
    }
}
