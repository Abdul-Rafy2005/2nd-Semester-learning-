#include<iostream>
using namespace std;
void function(int (*ptr)[3],int row,int columns){
    for (int  i = 0; i < row; i++) {
        for (int  j= 0; j < columns; j++)
        {
            cin >> *(*(ptr + i) + j);
        }   
    }
}
int main(){
    int row,columns;
    row = 2;
    columns = 3;
    int arr[2][3];
    int (*ptr)[3];

    ptr = arr;
    function (ptr,row,columns);
    
    
    for (int  i = 0; i < row; i++)
    {
        for (int  j= 0; j < columns; j++)
        {
            cout << *(*(ptr + i) + j) << "\t";
        }
         cout<< endl;
    }
    return 0;
}