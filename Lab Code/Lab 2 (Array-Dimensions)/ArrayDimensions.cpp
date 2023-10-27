#include <iostream>

using namespace std;

void getDatafor1D(int Array[], int Size) {
    for (int i = 0; i < Size; i++) {
        cout << "Enter Value for " << i << " Index:";
        cin >> Array[i];
    }
}

void displayDatafor1D(int Array[], int Size) {
    for (int i = 0; i < Size; i++) {
        cout << "Value at " << i << " Index: " << Array[i] << endl;
    }
}

void findMinimum1D(int Array[], int Size) {
    int temp = Array[0];
    for (int i = 0; i < Size; i++) {
        if (temp >= Array[i]) {
            temp = Array[i];
        }
    }
    cout << "Minimum Value :" << temp << endl;
}

void getDatafor2D(int **Array, int Rows, int Columns) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            cout << "Enter Value for 2D Array:";
            cin >> Array[i][j];

        }
    }
}

void displayDatafor2D(int **Array, int Rows, int n) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Value for 2D Array at Index " << i << j << ": ";
            cout << Array[i][j] << endl;
        }
    }
}

void getDatafor3D(int ***Array, int Rows, int Columns, int Mars) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            for (int z = 0; z < Mars; z++) {
                cout << "Enter Value for " << i << j << z << " Index:";
                cin >> Array[i][j][z];
            }
        }
    }
}

void displayDatafor3D(int ***Array, int Rows, int Columns, int Mars) {
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Columns; j++) {
            for (int z = 0; z < Mars; z++) {
                cout << "Value at " << i << j << z << " Index: " << Array[i][j][z] << endl;
            }
        }
    }
}

void findMinimum3D(int ***Array, int Rows, int Columns, int Mars) {
    int temp = Array[0][0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int z = 0; z < 2; z++) {
                cout << Array[i][j][z] << endl;
                if (temp >= Array[i][j][z]) {
                    temp = Array[i][j][z];
                }
            }
        }
    }
    cout << "Smallest Number:" << temp << endl;
}

int main() {
    int Size1;
    int Rows2, Columns2;
    int Rows3, Columns3, Mar3;

    cout << "Enter Size for 1D Array";
    cin >> Size1;
    int *oneArray = new int[Size1];

    cout << "Enter Rows for 2D Array:";
    cin >> Rows2;
    cout << "Enter Columns for 2D Array";
    cin >> Columns2;
    int **twoArray = new int *[Rows2];
    for (int i = 0; i < Columns2; i++) {
        twoArray[i] = new int[Columns2];
    }

    cout << "Enter Rows for 3D Array:";
    cin >> Rows3;
    cout << "Enter Columns for 3D Array";
    cin >> Columns3;
    cout << "Enter Columns2 for 3D Array";
    cin >> Mar3;
    int ***threeArray = new int **[Rows3];
    for (int i = 0; i < Rows3; i++) {
        threeArray[i] = new int *[Columns3];
        for (int j = 0; j < Columns3; j++) {
            threeArray[i][j] = new int[Mar3];
        }
    }
    int userChoice;

    do {
        cout << "\n\n\t\t\tEnter Choice";
        cout << "\n\n\t\t\t1. Enter Data for 1D Array";
        cout << "\n\n\t\t\t2. Show Data for 1D Array";
        cout << "\n\n\t\t\t3. Enter Data for 2D Array";
        cout << "\n\n\t\t\t4. Show Data for 2D Array";
        cout << "\n\n\t\t\t5. Enter Data for 3D Array";
        cout << "\n\n\t\t\t6. Show Data for 3D Array";
        cout << "\n\n\t\t\t7. Find Minimum Value for 1D Array";
        cout << "\n\n\t\t\t8. Find Minimum Value for 3D Array";
        cout << "\n\n\t\t\t0. Exit";
        cin >> userChoice;
        switch (userChoice) {
            case 1:
                getDatafor1D(oneArray, Size1);
                break;
            case 2:
                displayDatafor1D(oneArray, Size1);
                break;
            case 3:
                getDatafor2D(twoArray, Rows2, Columns2);
                break;
            case 4:
                displayDatafor2D(twoArray, Rows2, Columns2);
                break;
            case 5:
                getDatafor3D(threeArray, Rows3, Columns3, Mar3);
                break;
            case 6:
                displayDatafor3D(threeArray, Rows3, Columns3, Mar3);
                break;
            case 7:
                findMinimum1D(oneArray, Size1);
                break;
            case 8:
                findMinimum3D(threeArray, Rows3, Columns3, Mar3);
                break;
            case 0:
                exit(0);
            default:
                cout << "\n\t\t\tInvalid choice! Please try again.";
        }
    } while (userChoice != 0);

    return 0;
}

