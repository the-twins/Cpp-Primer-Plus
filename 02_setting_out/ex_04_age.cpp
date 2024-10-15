// Write a program that asks the user to enter his or her age.The program then should
// display the age in months:
// Enter your age: 29
// Your age in months is 348
#include <iostream>

using namespace std;

const int MonthsInYear = 12;

int main()
{
    int input_year;
    cout << "Enter your age: ";
    cin >> input_year;
    cout << "Your age in months is " << input_year * MonthsInYear << endl;
    
    return 0;
}
