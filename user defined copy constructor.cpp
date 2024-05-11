

// we use deep copy when we have a pointer in our class 
// it will copy all data member and pointer itself
#include<iostream>
using namespace std;
class sample{
    int x;
    int y;
        public:
     sample(int x1,int y1){
        x = x1;
        y = y1;

     }  

     // user defined copy constructor
     // we use & in parameter because through this,compiler will get only the address of a 
     // single object of the class 
     sample(const sample &p){
        x = p.x;
        y = p.y;
     }  

     int getx(){
        return x;
     }
     int gety(){
        return y;
     }
};

int main(){
    sample s1(10,20);
    // object1 copy to object2
    sample s2 = s1;
    cout << "the value of copied object is : "<<s2.getx()<<endl;
    cout << "the value of copied object is : "<<s2.gety();          
}