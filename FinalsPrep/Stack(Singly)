#include <iostream>
using namespace std;

struct Stack {
    int num;
    Stack* next;

    Stack(int d){
        num = d;
        next = nullptr;
    }
};

void insert(Stack *&top, int num){

    Stack *newNode = new Stack(num);

    newNode->next = top;
    top = newNode;

}

void display(Stack*& top){
    Stack *temp = top;
    if (temp == nullptr){
        cout << "No Data Found" << endl;
    }  else {
        cout << "Linked List Data: ";
        do {
            cout << temp->num << ", ";
            temp = temp->next;
        } while (temp);
    }
}

void pop(Stack *&top){

    if (top == nullptr){
        cout << "No Data Found" << endl;
        return;
    }

    Stack *temp = top;
    top = top->next;
    delete temp;
}

int main(){
    Stack *head = nullptr;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    pop(head);
    insert(head, 40);
    display(head);
}
