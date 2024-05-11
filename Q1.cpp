#include<iostream>
using namespace std;

class DayofYear{
    int day;
    static string month[12];

public:

    DayofYear(int Day = 1) : day(Day) {}
    
    void print() {

        if (day >= 1 && day <= 31) {
            cout << month[0] << " and date is  " << day << endl;

        } else if (day > 31 && day <= 59) {
            cout << month[1] << " and date is   " << (day - 31)<< endl;

        } else if (day > 59 && day <= 90) {
            cout << month[2] << " and date is  " << (day - 59)<< endl;

        } else if (day > 90 && day <= 120) {
            cout << month[3] << " and date is   " << (day - 90)<< endl;

        } else if (day > 120 && day <= 151) {
            cout << month[4] << " and date is   " << (day - 120)<< endl;

        } else if (day > 151 && day <= 181) {
            cout << month[5] << " and date is  " << (day - 151)<< endl;

        } else if (day > 181 && day <= 212) {
            cout << month[6] << " and date is   " << (day - 181)<< endl;

        } else if (day > 212 && day <= 243) {
            cout << month[7] << " and date is  " << (day - 212)<< endl;

        } else if (day > 243 && day <= 273) {
            cout << month[8] << "and date is   " << (day - 243)<< endl;

        } else if (day > 273 && day <= 304) {
            cout << month[9] << " and date is   " << (day - 273)<< endl;

        } else if (day > 304 && day <= 334) {
            cout << month[10] << " and date is   " << (day - 304)<< endl;

        } else if (day > 334 && day <= 365) {
            cout << month[11] << " and date is   " << (day - 334)<< endl;

        } else {
            cout << "Wrong input" << endl;
        }
    }
};

string DayofYear::month[12] = {

    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July", 
    "August",
    "September",
    "October",
    "November",
    "December"

};

int main() {

    int day;

    do {
    cout << "Enter day number: ";
    cin >> day;

    DayofYear object(day);
    object.print();

    } while (1);

    return 0;
}
