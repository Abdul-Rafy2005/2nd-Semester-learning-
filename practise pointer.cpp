#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the number that you want value: ";
    cin >> size;

    int arr[size];
    int (*ptr)[size];
    ptr = &arr;
    
    int temp = 0;
    cout << "Input the value: "<<endl;
    for (int i = 0 ; i < size ; i++){
       cin >> *(*ptr + i);
    }

    for (int i = 0; i < size - 1; i++){
        for (int j = 0 ; j < size - i - 1;j++){
            if (*(*ptr + j) > *(*ptr + 1 + j)){
             temp = *(*ptr + j);
             *(*ptr + j) = *(*ptr + j + 1);
             *(*ptr + j + 1) = temp;
            }
        }
    }

    cout << "Your sorted values are: "<<endl;
    for (int i = 0; i < size;i++){
        cout << *(*ptr + i)<<endl;
    }
}