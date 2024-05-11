#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int arr[] = {1,2,3,4,5};
    ptr = arr;
    for (int u =0;u<5;u++){
        cout << *ptr << "\n";
        ptr++;
    }
    return 0;
}