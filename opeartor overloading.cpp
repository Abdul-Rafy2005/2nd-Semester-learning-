#include<iostream>
using namespace std;

class abc{
private:
    int x;
    int y;
public:
    abc(int X = 1, int Y = 1): x(X), y(Y) {}
    friend abc operator+(const abc& a1, const abc& a2); // Changed return type to abc
    friend ostream& operator<<(ostream& out, const abc& a); // Changed first parameter to ostream&
};

abc operator+(const abc& a1, const abc& a2) {
    abc object;
    object.x = a1.x + a2.x;
    object.y = a1.y + a2.y;
    return object;
}

ostream& operator<<(ostream& out, const abc& a) {
    out << a.x << " " << a.y;
    return out;
}

int main() {
    abc a1;
    abc a2(2, 2);
    abc a3;
    a3 = a1 + a2;
    cout << a3 << endl;
    return 0;
}
