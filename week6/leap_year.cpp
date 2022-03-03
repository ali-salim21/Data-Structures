#include <iostream>
using namespace std;
int main() {
    int year;
    // take year input from user
    cout << "please enter the leap year: ";
    cin >> year;

    // check if year > 999 
    // check if year can be year % 4 == 0 
    // check if year can be year % 400 == 0
    if (year > 999 && year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
    cout << "Leap year. Success!!" << endl;
    
    } else {
    cout << "Not leap year!!!" << endl;
    
    }

    return 0;
}