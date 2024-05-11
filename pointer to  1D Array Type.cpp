#include<iostream>
using namespace std;

void function(int (*ptr)[7]){
        cout << "base address in array type: "<< ptr <<endl ;
    cout << "after increament "<< ++ptr << endl;
    cout << "in int type "<< *ptr + 1 <<"\n"<< "after increament "<< *ptr + 2 <<endl;
    ptr--;
    cout << "content at 0 index is : "<< *(*ptr + 2);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int (*ptr)[7];
    ptr = &arr;
    function (ptr);
    
    cout << "\n\n";
    cout << "base address in array type: "<< ptr <<endl ;
    cout << "after increament "<< ++ptr << endl;
    cout << "in int type "<< *ptr + 1 <<"\n"<< "after increament "<< *ptr + 2 <<endl;
    ptr--;
    cout << "content at 0 index is : "<< *(*ptr + 2);
    return 0;
}