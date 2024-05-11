#include<iostream>
using namespace std;
class Account{
    public:
    int account;
    string name;
    // static data member
    static float rateofinterest;
    
    public:
    Account(int account,string name){
        this->account = account;
        this->name = name;
    }

    void display(){
        cout<<account<<" "<<name<<" "<<rateofinterest<<endl;
    }
};
// static variable
float Account ::rateofinterest = 6.5;
int main(){
  Account a(112,"khan");
    Account b(112,"bhai");

    a.display();
    b.display();

}


