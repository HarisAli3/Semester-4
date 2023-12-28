#include <iostream>
using namespace std;

struct Doubly{
    int data;
    Doubly *next;
    Doubly *prev;

    Doubly(int num){
        data = num;
        next = nullptr;
        prev = nullptr;
    }
};

void insert(Doubly *&head, int num){

    Doubly *newNode = new Doubly(num);

    if (head == nullptr){
        head = newNode;
    } else {
        Doubly *temp = head;
        while (temp->next != nullptr){
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }
}

void insertAtFirst(Doubly *&head, int num){

    Doubly *newNode = new Doubly(num);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}

void deletion(Doubly *&head, int value){
    Doubly *temp = head;
    Doubly *parent = nullptr;

    while (temp){
        if (temp->data == value){
            if (parent == nullptr){
                head = temp->next;
                delete temp;
                return;
            }
            if (temp->next == nullptr){
                parent->next = nullptr;
                return;
            }
            Doubly *deleteNode = temp;
            parent->next = temp->next;
            temp->next->prev = parent;

            delete deleteNode;
            return;
        }
        parent = temp;
        temp = temp->next;
    }
    cout << "Node Not Found" << endl;
}
void display(Doubly *&head){
    Doubly *temp = head;
    if (temp == nullptr){
        cout << "Linked List is Empty" << endl;
    } else {
        cout << "Doubly List: ";
        while(temp){
            cout << temp->data << ", ";
            temp = temp->next;
        }
    }
}
int main() {
    Doubly *head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    insertAtFirst(head, 5);
    deletion(head, 40);
    display(head);

    return 0;
}
