#include<iostream>
using namespace std;
int main()
{
int* ip = new int;
short* sp;
char* cp;
*ip = 16706; //Hex 4142
*ip=65;
//cp=ip;
cp = (char*)ip;
cout << *cp << endl;
cout << *(cp + 1) << endl;
sp = (short*)ip;
cout << *sp;
}
