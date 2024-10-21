// Write a program that asks the user to enter a latitude in degrees, minutes, and seconds and that then
// displays the latitude in decimal format. There are 60 seconds of arc to a minute and 60 minutes of arc to
// a degree; represent these values with symbolic constants. You should use a separate variable for each input
// value. A sample run should look like this:
// Enter a latitude in degrees, minutes, and seconds:
// First, enter the degrees: 37
// Next, enter the minutes of arc: 51
// Finally, enter the seconds of arc: 19
// 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
#include <iostream>

using namespace std;

const float SecOfArcMin = 60.0;
const float MinOfArcDegr = 60.0;

int main(void)
{
    unsigned short degrees;
    unsigned short min_of_arc;
    unsigned short sec_of_arc;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> min_of_arc;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec_of_arc;
    cout << degrees << " degrees, " << min_of_arc << " minutes, " << sec_of_arc << " seconds = "
    << degrees + (min_of_arc / MinOfArcDegr) + (sec_of_arc / (SecOfArcMin * SecOfArcMin)) << " degrees" << endl;

    return 0;
}
