//
// Created by 70132579 on 12/15/2023.
//

#include <iostream>
using namespace std;
void swap(int *ptr, int parent,int child){
    int temp=ptr[parent];
    ptr[parent]=ptr[child];
    ptr[child]=temp;
}
class BinaryHeap{
    int *binary_heap;
    int capacity;
    int heap_pointer;
public:
    BinaryHeap(int size){
        binary_heap =new int[size];
        heap_pointer=0;
        capacity=size;
    }
    void insert(int val);
    int parent(int i){
        return i/2;
    }
    int left_child(int i){
        return 2*i;
    }
    int right_child(int i){
        return 2*i+1;
    }
    void display();
};
void BinaryHeap::insert(int val){
    if(heap_pointer== capacity){
        cout <<"Full heap"<<endl;
        return;

    }
    if(heap_pointer== 0){
        heap_pointer++;
        binary_heap[heap_pointer]=val;
        return;
    }
    heap_pointer++;
    binary_heap[heap_pointer]=val;
    int i=heap_pointer;
    while(i!=1 && binary_heap[parent(i)]>binary_heap[i]){
        swap(binary_heap,parent(i),i);
        i=parent(i);
    }
}
void BinaryHeap::display(){
    for(int i = 1;i<=heap_pointer;i++){
        cout<<binary_heap[i]<<" ";
    }
    cout <<endl;
}
int main(){
    int size;
    cout <<"Enter the size: ";
    cin>>size;
    BinaryHeap obj(size);
    cout <<"....Binary heap...."<<endl;
    obj.insert( 5);
    obj.insert( 3);
    obj.insert( 10);
    obj.insert( 13);
    obj.insert( 17);
    obj.insert( 8);
    obj.insert( 20);
    obj.display();
    return 0;
}