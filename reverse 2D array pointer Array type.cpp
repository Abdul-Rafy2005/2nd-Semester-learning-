#include<iostream>
using namespace std;
int main(){
    int row , column , temp;

    cout << "Enter the Number of rows: ";
    cin >> row;

    cout << "Enter the number of column: ";
    cin >> column;

    int arr[row][column];
    int (*ptr)[column];
    ptr = arr;

     for (int i = 0; i< row; i++){
        for (int  j = 0; j < column; j++)
        {
           cin >> *(*(ptr+i)+j); 
        } 
     }


    for (int i = 0; i < row; i++){
        for (int j = 0; j < column / 2.0; j++){
            int temp = *(*(ptr + i) + j);
            *(*(ptr + i) + j) = *(*(ptr + i) + column - j - 1);
            *(*(ptr + i) + column - j - 1) = temp;
         }
      }

     for (int i = 0; i< row; i++){
        for (int  j = 0; j < column; j++)
        {
           cout <<*(*(ptr+i)+j) << " "; 
        } 
        cout << endl;
     }

    return 0;
}