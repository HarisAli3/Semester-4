//
// Created by 70132579 on 11/17/2023
//

#include <iostream>
using namespace std;

/*int BinarySearch(const int arr[], int low, int high, int value){

    int mid;

    while (high >= low) {
        mid = (low + high) / 2;
        if (arr[mid] == value) {
            return mid;
        } else if (arr[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}*/
/*
int BinarySearch(const int arr[], int low, int high, int value){

    int mid;

    if (high >= low) {

        mid = (low + high) / 2;

        if (arr[mid] == value) {
            return mid;
        }

        if (arr[mid] > value)
            return BinarySearch(arr, low, mid - 1, value);

        return BinarySearch(arr, mid + 1, high, value);
        }
}

int main(){

    int arr[] = {2,4,5,8,9,10};
    int low = 0, high = size(arr) - 1, value;                                                                                                    
    cin >> value;
    int result = BinarySearch(arr, low, high, value);
    if (result == -1)

        cout << "Value Not Found" << endl;
    else
        cout << "Value Found at Index " << result << endl;
}*/
