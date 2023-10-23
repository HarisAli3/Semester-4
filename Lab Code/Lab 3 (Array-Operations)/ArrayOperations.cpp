#include <iostream>
using namespace std;

void insertion() {
    int size;
    cout << "Enter Size for Array:";
    cin >> size;
    int array[size];
    cout << "Enter Values for Array of Size: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "At Index " << i << ":";
        cin >> array[i];
    }

    int index = 2, value;
    cout << "Enter Value to Insert:";
    cin >> value;
    cout << "Enter Position for Value:";
    cin >> index;
    cout << "Before Insertion:" << endl;
    for (int i = 0 ; i < size; i++){
        cout << "Index " << i << ": " << array[i] << endl;
    }
    size++;
    for (int i = size; i >= index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = value;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }
}
void deletion() {
    int size;
    cout << "Enter Size for Array:";
    cin >> size;
    int array[size];
    cout << "Enter Values for Array of Size: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "At Index " << i << ":";
        cin >> array[i];
    }
    int index;
    cout << "Enter Index You want to delete:";
    cin >> index;
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << endl << "After Deletion: ";
    for (int i = index; i < size; i++) {
        array[i] = array[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
}
void linearSearch() {
    int size;
    cout << "Enter Size for Array:";
    cin >> size;
    int array[size];
    cout << "Enter Values for Array of Size: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "At Index " << i << ":";
        cin >> array[i];
    }
    for (int i = 0 ; i < size; i++){
        cout << "Value for Index " << i << ":";
        cin >> array[i];
    }
    for (int i = 0; i < size ; i++){
        cout << "Index " << i << ": " << array[i] << endl;
    }
    bool found = false;
    int index = -1;
    int value;
    cout << "Enter Value you want to Find:";
    cin >> value;
    for (int i = 0; i < size; i++){
        if (array[i] == value){
            found = true;
            index = i;
            break;
        }
    }
    if (found){
        cout << "Value found at Index:" << index << endl;
    } else {
        cout << "Not Found";
    }
}
void binarySearch(){
    int size;
    cout << "Enter Size for Array:";
    cin >> size;
    int array[size];
    cout << "Enter Values for Array of Size: " << size << endl;
    for (int i = 0; i < size; i++) {
        cout << "At Index " << i << ":";
        cin >> array[i];
    }
    int first = 0, last = size - 1, mid;
    for (int i = 0; i < size ; i++){
        cout << "Index " << i << ": " << array[i] << endl;
    }
    int value;
    cout << "Enter Value to Find:";
    cin >> value;
    bool found = false;
    int index = -1;
    while (last >= first){
        mid = (first + last) / 2;
        cout << "Mid:" << mid << endl;
        if (value == array[mid]){
            found = true;
            index = mid;
            break;
        }
        else if (array[mid] < value){
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }
    cout << index;
    if (found) {
        cout << "Value Found At Index:" << index << endl;
    }
}
void merging(){
    int size1, size2, size3;
    cout << "Enter Size for Array 1:";
    cin >> size1;
    int array1[size1];
    for (int i = 0 ; i < size1; i++){
        cout << "For Index " << i << ":";
        cin >> array1[i];
    }
    cout << "Enter Size for Array 2:";
    cin >> size2;
    int array2[size2];
    for (int i = 0 ; i < size2; i++){
        cout << "For Index " << i << ":";
        cin >> array2[i];
    }
    cout << "Enter Size for Array 3:";
    cin >> size3;
    int array3[size3];
    for (int i = 0 ; i < size3; i++){
        cout << "For Index " << i << ":";
        cin >> array3[i];
    }
    int size4 = size1 + size2 + size3;
    int array4[size4];
    int i;
    for (i = 0 ; i < size1; i++){
        array4[i] = array1[i];
    }
    int k = i;
    for (i = 0 ; i < size2; i++){
        array4[k] = array2[i];
        k++;
    }
    for (i = 0; i < size3; i++){
        array4[k] = array3[i];
        k++;
    }
    cout << "After Merging: ";
    for (int j = 0; j < size4; j++){
        cout << array4[j] << ", ";
    }
}

int main(){

    bool close = false;
    int choice;

    while(!close){
        
        cout << "\nArray Operations:" << endl;
        cout << "1: Insertion" << endl;
        cout << "2: Deletion"<< endl;
        cout << "3: Linear Search"<< endl;
        cout << "4: Binary Search"<< endl;
        cout << "5: Merging of 3 Array" << endl;
        cout << "Choice:";
        cin >> choice;

        switch (choice){
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                linearSearch();
                break;
            case 4:
                binarySearch();
                break;
            case 5:
                merging();
                break;
            case 0:
                close = true;
                break;
            default:
                cout << "Invalid Option " << endl;
                break;
        }
    }
    return 0;
}
