#include<iostream>
using namespace std;
int main(){
    // just passing 
    int variable = 5;
    int* ptr1 = &variable;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;
    int**** ptr4 = &ptr3;
    cout << &variable << "\t" << &ptr1 <<"\t" << &ptr2 <<"\t" << &ptr3 << "\t"<< &ptr4; 

   return 0;
}