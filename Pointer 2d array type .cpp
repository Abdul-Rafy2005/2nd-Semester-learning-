#include<iostream>
using namespace std;
int main(){
   int arr[2][5];
    int (*ptr)[5];
    ptr = arr;
    for (int i = 0;i < 2;i++){
        cout << "base addess of "<< i << " 1D array is "<< *(ptr + i)<<endl;
        for (int j = 0; j < 5 ;j++){
            cout << "address of index ["<< i << "]["<< j <<"]"<< "is " << *(ptr + i) + j << endl ;
            cout << "content of index is "<<*(*(ptr + i)+j)
        }
    }
   
    return 0;
}