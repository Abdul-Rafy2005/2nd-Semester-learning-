


#include<iostream>
using namespace std;
const char* c[] = { "OOP", "Exam" , "Oopsmid-1", "MID" };
char const** cp[] = { c + 2, c + 3, c , c + 1 };
char const*** cpp = cp;
int main()
{
cout << *cpp[1] << endl;
cout << *(*(*(cpp + 2) + 2) + 3) << endl;
cout << (*cpp)[-1] << endl;
cout << *(cpp + 3)[-1] << endl;
return 0;
}



