#include<iostream>
using namespace std;
void foo(int(*ptr)[4]) {
 cout << ptr[0][0] << " ";
}
int main()
{
 int arr[9] = { 2,4,6,8,10,12,114,16,18 };
 foo((int(*)[4])(arr));
 foo((int(*)[4])(arr + 2));
 foo((int(*)[4])(arr) + 1);
 int arr2[3][4] = { 12,24,36,48,60,72,84,96,108,120,132,144 };
 foo((int(*)[4])(arr2) + 1);
 return 0;
}
