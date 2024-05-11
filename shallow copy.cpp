#include<iostream>
using namespace std;
class circle{
    int *radius;
      public:
    void setradius(int r){
        *radius = r;
    }  

    void display(){
        cout << "Radius is: "<<*radius<<endl;
    }

    circle(){
        radius = new int;
    }

    ~circle(){
        delete radius;
    }
};
int main(){
      circle c1;
      c1.setradius(6);
      c1.display();

      circle c2;
      c2 = c1;
      cout << "R2 radius \n";
      c2.setradius(4);
      c1.display();
}