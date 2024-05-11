#include<iostream>
using namespace std;
int main(){

int *pointer1, *pointer2; 
int num1 = 93;
pointer1 = NULL;
if ( pointer1 == NULL)
 pointer1 = &num1;
pointer2 = &num1;
if ( pointer1 == pointer2 ){ 
    cout << "Both pointers are equal";
    } else { // pointer compared to pointer
    cout << "hel \n";}
}