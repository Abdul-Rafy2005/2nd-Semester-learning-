
#include<iostream>
using namespace std;
class dynamicvar {
    private:
    int *ptr;
public:
dynamicvar(int n) {
cout<<"in constructor: Allocating variable on the heap: "<<endl;
ptr = new int;
*ptr = n;
}
dynamicvar(const dynamicvar & obj) {
cout<<"in copy constructor: copying object: "<<endl;
ptr = new int;
*ptr = *(obj.ptr);
}
~dynamicvar(){
cout<<"In Destructor: Dynamically allocated variable is being deleted:";
delete ptr; }

void modify(int a){
    *ptr = a;
}

void display(){
    cout << *ptr << endl;
}
};
int main() {
dynamicvar D1(5);
D1.display();
{

dynamicvar D2(D1);//calling default copy constructor
D2.modify(10);
D2.display(); //what will it print?

} //destructor called for D2.
D1.display();
}