//
// Created by 70132579 on 10/27/2023.
//

#include <iostream>

using namespace std;

int main() {
/*
   int arr[6] = {9,5,1,4,3, 10};

    for (int i = 1; i < sizeof(arr)/ sizeof(int); i++){

        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }


    for (int i = 0; i < sizeof(arr)/ sizeof(int); i++){
        cout << arr[i] << ",";
    }
*/
    int size;
    cout << "Enter Size for Array:";
    cin >> size;
    int arr[size];

    cout << "Value for Array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = size - 1; i >= 0; --i) {

        int key = arr[i];
        int j = i + 1;

        while (key > arr[j] && j <= 5) {
            arr[j - 1] = arr[j];
            ++j;
        }

        cout << key << endl;
        arr[j - 1] = key;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ",";
    }


/*    int arr[5] = {10,12,11,13,14};
    for (int i = 1; i < sizeof(arr)/ sizeof(int); i++){
        int key = arr[i];
        int j = i - 1;
        while (key > arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < sizeof(arr)/ sizeof(int); i++){
        cout << arr[i] << ",";
    }*/

/*    int arr[5] = {16,12,15,13,11};

    for (int i = 3; i > 0 ; --i){

        int key = arr[i];
        int j = i - 1;

        while (key < arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        cout << "J: " << j << endl;
        arr[j + 1] = key;
    }

    for (int i = 0; i < 4; i++){
        cout << arr[i] << ",";
    }*/

}