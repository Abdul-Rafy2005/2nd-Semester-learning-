#include<iostream>
using namespace std;
class convert{

    int amount;
    static string lessthan20[20];
    string Array2[10] = {
    "One",
     "ten", 
     "twenty",
      "thirty", 
      "forty",
       "fifty", 
       "sixty",  
        "seventy", 
        "eighty", 
        "ninety"
};
   
    string hundred = "hundred";
    string thousand = "thousand";

    public:
    convert(int Amount) : amount(Amount){}

    void print (){
        if (amount >= 0 && amount <= 19){
            cout << lessthan20[amount] <<endl;
        } else if (amount >= 10 && amount <= 99){
            cout << "" << endl ;
        }    else if (amount < 100){
            cout << Array2[amount / 10] << " " << lessthan20[amount % 10] << endl;
        } else if (amount < 1000){
            cout << lessthan20[amount / 100] << " " << hundred;
            if (amount % 100 != 0) {
                cout << " and " << Array2[(amount % 100) / 10] << " " << lessthan20[(amount % 100) % 10];
            }
            cout << endl;
        }
    }
};



 



 
    






string convert::lessthan20[20] = {

    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six", 
    "seven",
    "eight",
    "nine",
    "ten",
    "elevan"
    "twelve",
    "thirteen",
    "fourteen", 
    "fifteen",
    "sixteen",
    "seveteen",
    "eighteen",
    "nineteen"    
};

int main (){

    int amount;

    do {

    cout << "Enter amount: ";
    cin >> amount;

    convert object(amount);
    object.print();

    } while (1);

}