#include<iostream>
using namespace std;

void function(int (*ptr)[3], int row, int columns) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> ptr[i][j];
        }
    }
}

int main() {
    int row = 2;
    int columns = 3;
    int arr[row][columns];
    int (*ptr)[3]; // Corrected pointer declaration

    ptr = arr;
    function(ptr, row, columns);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < columns; j++) {
            cout << ptr[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}

