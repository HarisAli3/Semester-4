//
// Created by haris on 9/28/2023.
//

#include <iostream>
using namespace std;

int STACK[10], top = -1;

void Display(){
    if (top == -1){
        cout << "Stack OverFlow" << endl;
    } else {
        for (int i = top; i > ; i++){
            cout << STACK
        }
    }
}
int main(){
    ++top;
    STACK[top] = 10;
    if (top == - 1){
        cout << "Stack OverFlow" << endl;
    }

}

