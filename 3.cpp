#include <iostream>
using namespace std;

int main() {
    int year;

    // Prompt with example year 1997
    cout << "Enter a year AD, for example, 1997: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }

    // Change prompt to example year 2005
    cout << "\nEnter a year AD, for example, 2005: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year";
    } else {
        cout << year << " is not a leap year";
    }

    return 0;
}