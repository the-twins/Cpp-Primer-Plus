// Write a short program that asks for your height in integer inches and then converts
// your height to feet and inches. Have the program use the underscore character to
// indicate where to type the response. Also use a const symbolic constant to represent the 
// conversion factor.
#include <iostream>

using namespace std;

const unsigned short InchInFeet = 12;

int main()
{
    unsigned short inches;
    cout << "Enter your height in inches:___\b\b\b";
    cin >> inches;
    cout << "Your height in feet is " << inches / InchInFeet << " and " << inches % InchInFeet << " inches" 
    << endl;
    
    return 0;
}
