#include <iostream>
using namespace std;

struct Stack{
    int data;
    Stack *next;
    Stack *prev;

    Stack(int num){
        data = num;
        next = nullptr;
        prev = nullptr;
    }
};

void insert(Stack *&top, int num){

    Stack *newNode = new Stack(num);

    if (top){
        newNode->next = top;
        top->prev = newNode;

    }
    top = newNode;
}

void deletion(Stack *&top){
    if (top == nullptr) {
        cout << "Stack is empty. Cannot delete." << endl;
        return;
    }

    Stack *temp = top;
    top = top->next;

    if (top != nullptr) {
        top->prev = nullptr;
    }

    delete temp;
}

void display(Stack *&top){
    Stack *temp = top;
    if (temp == nullptr){
        cout << "Linked List is Empty" << endl;
    } else {
        cout << "Stack List: ";
        while(temp){
            cout << temp->data << ", ";
            temp = temp->next;
        }
    }
}
int main() {
    Stack *top = nullptr;

    insert(top, 10);
    insert(top, 20);
    insert(top, 30);
    insert(top, 40);

    deletion(top);
    display(top);

    return 0;
}
