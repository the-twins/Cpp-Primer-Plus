// Write a program that asks the user to enter an hour value and a minute value. The
// main() function should then pass these two values to a type void function that displays the two 
// values in the format shown in the following sample run:
// Enter the number of hours: 9
// Enter the number of minutes: 28
// Time: 9:28
#include <iostream>

using namespace std;

void time(int hours, int minutes);

int main()
{
    unsigned short hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    time(hours, minutes);
    
    return 0;
}

void time(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}
