#include<iostream>
#include<string>
using namespace std;
class parent{
    public:
    virtual  void show() =  0; // its will never be called 
};

class child : public parent{
    public:
     void show(){
        cout << "Child function"<<endl;
    }
};
int main(){


   parent *ptr;

   child c;
   ptr = &c;
 
   ptr->show();

}