#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

void insert(Node **head, int newData){
    Node *newNode = new Node;

    newNode->data = newData;
    newNode->next = nullptr;

    newNode->prev = newNode;

    if (*head == nullptr){
        *head = newNode;
        return;
    }

    Node *temp = *head;
    while (temp != nullptr){
        if (temp->next == nullptr){
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
}

void display(Node **head){
    Node *list = *head;
    while (list != nullptr){
        cout << list->data;
        if (list->next != nullptr){
            cout << ", ";
        }
        list= list->next;
    }
    cout << endl;
}
void sizeComparison(Node **list1, Node **list2){

    int count1 = 0, count2 = 0;
    Node *temp1 = *list1;
    Node *temp2 = *list2;

    while (temp1 != nullptr){
        temp1= temp1->next;
        count1++;
    }

    while (temp2 != nullptr){
        temp2= temp2->next;
        count2++;
    }

    if (count1 == count2){
        cout << "Size: Both Lists are Equal" << endl;
    } else {
        cout << "Size: They are not equal" << endl;
    }
}
void valuesComparison(Node **list1, Node **list2){

    Node *temp1 = *list1;
    Node *temp2 = *list2;
    bool equal = true;

    while ((temp1 != nullptr) && (temp2 != nullptr)){
        if (temp1->data != temp2->data){
            cout << "Values Comparison: They are not equal" << endl;
            equal = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (equal){
        cout << "Values Comparison: Both Lists are Equal" << endl;
    }
}

int main(){
    Node *list1 = nullptr;
    Node *list2 = nullptr;

    insert(&list1, 10);
    insert(&list1, 20);
    insert(&list1, 30);

    cout << "Doubly List 1: ";
    display(&list1);

    insert(&list2, 10);
    insert(&list2, 20);
    insert(&list2, 40);

    cout << "Doubly List 2: ";
    display(&list2);

    cout << endl;
    sizeComparison(&list1, &list2);
    cout << endl;
    valuesComparison(&list1, &list2);

}