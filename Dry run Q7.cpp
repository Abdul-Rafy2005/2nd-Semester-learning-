#include<iostream>
using namespace std;
void find(int, int&, int&, int = 4);

int main() {
int one = 1, two = 2, three = 3;
find(one, two, three);
cout << one << " " << two << " " << three << endl;
return 0;
}

void find(int a, int & b, int& c, int d) {
if (d < 1)
return;
cout << a << " " << b << " " << c <<endl;
c = a + 2 * b;
int temp = b;
b = a;
a = 2 * temp;
d % 2 ? find(b, a, c, d - 1) : find(c, b, a, d - 1);
}