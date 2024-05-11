#include <iostream>
using namespace std;
int main()
{
 const char* str[] = { "AAAAA", "BBBBB", "CCCCC", "DDDDD" };
 const char** sptr[] = { str + 3, str + 2, str + 1, str };
 const char*** pp;
 pp = sptr;
 ++pp;
 cout << **++pp + 2;
}
