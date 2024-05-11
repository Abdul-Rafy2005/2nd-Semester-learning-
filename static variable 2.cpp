#include<iostream>
using namespace std;

class Count {
    public:
     static int counter;
     Count (){
        counter++;

     }

     int getcount(){
        return counter;
     }
};
int Count::counter = 0;
int main(){
  Count a,s,d,f;
  cout<< "total object is : "<< a.getcount();
}