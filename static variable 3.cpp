#include<iostream>
using namespace std;

class Account{
    public:
    int account;
    string name;
    // static data member
    static int count;
    
    public:
    Account(int account,string name){
        this->account = account;
        this->name = name;
        count++;
    }

    static int getCount(){
        return count;
    }

    void display(){
        cout<<account<<" "<<name<<endl;
    }
};
int Account::count = 0;
int main(){
   Account a(112,"Tuahaaaaa");
   Account d(505,"wasay");
  
  d.display();
  a.display();

    cout<< "total object is : "<< Account::getCount();
      
}