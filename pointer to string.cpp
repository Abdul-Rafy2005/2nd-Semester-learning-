#include<iostream>
#include<string>
using namespace std;

int main() {
    string test;

    cout << "Enter Your name: ";
    getline(cin, test);

    char *ptr = &test[0];

    for (int i = 0; i < test.size(); i++) {
        if (i == test.size() - 1) *ptr = 'a';
        ptr++;
    }
    cout << test;
    return 0;
}
