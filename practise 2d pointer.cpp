#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void rotateMatrix(int matrix[3][3]) {

    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3 / 2; ++j) {
            swap(matrix[i][j], matrix[i][2 - j]);
        }
    }
}

void printMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matrix before rotation:" << endl;
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "\nMatrix after rotation:" << endl;
    printMatrix(matrix);

    return 0;
}
