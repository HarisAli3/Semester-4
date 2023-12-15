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
    void deleteValue(int index);
    void heapify(int index);
    int Extract_Min();
};
void BinaryHeap::insert(int val){
    if(heap_pointer== (capacity-1)){
        cout <<"Full heap"<<endl;
        return;

    }
    if(heap_pointer== 0){

        binary_heap[++heap_pointer]=val;
        return;
    }

    binary_heap[++heap_pointer]=val;
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
void BinaryHeap::deleteValue(int index){
    binary_heap[index]=binary_heap[heap_pointer];
    heap_pointer--;
    heapify(index);

}
void BinaryHeap::heapify(int i){
    while(true){
        int l= left_child(i);
        int r= right_child(i);
        int smallest = i;
        if (l<=heap_pointer &&binary_heap[l] < binary_heap[i])
            smallest =l;
        if (r<=heap_pointer &&binary_heap[r]<binary_heap[smallest])
            smallest =r;
         if(smallest!=i){
            swap(binary_heap,i,smallest);
            i=smallest;

        }else{
            break;
        }
    }
}
int BinaryHeap::Extract_Min() {
    if (heap_pointer==0){
        return -1;
    }
    return binary_heap[1];
}
int main(){

    BinaryHeap obj(8);
    cout <<"....Binary heap...."<<endl;
    obj.insert( 5);
    obj.insert( 3);
    obj.insert( 10);
    obj.insert( 13);
    obj.insert( 17);
    obj.insert( 8);
    obj.insert( 20);
    obj.insert( 25);
    obj.display();
    int min=obj.Extract_Min();
    if(min==-1){
        cout <<"Heap is Empty"<<endl;
    }else{
        cout <<"Minimum:"<<min<<endl;
    }

    cout <<"...Deleting Value...."<<endl;
    obj.deleteValue(3);
    obj.display();

    return 0;
}