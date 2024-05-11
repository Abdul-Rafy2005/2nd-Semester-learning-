#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    int (*ptr)[size];
    ptr = &arr;

    cout << "Enter values: "<< endl;
    for (int  i = 0; i < size ; i++){
        cin >> *(*ptr + i);
    }

    int steps,temp;
    cout << "Enter the steps: ";
    cin >> steps;

    for (int i = 0 ; i < steps ; i++){
          temp = *(*ptr + size - 1);
        for (int j = size - 1; j >= 0 ; j--){   
            if (j == 0){
                *(*ptr + j) = temp;
                continue;
            }

            *(*ptr + j) = *(*ptr + j - 1);
        }
    }

    for (int  i = 0; i < size ; i++){
        cout << *(*ptr + i) << endl;
    }
}