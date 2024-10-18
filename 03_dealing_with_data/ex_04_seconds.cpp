// Write a program that asks the user to enter the number of seconds as an integer
// value (use type long, or, if available, long long) and that then displays the equivalent
// time in days, hours, minutes, and seconds. Use symbolic constants to represent
// the number of hours in the day, the number of minutes in an hour, and the number
// of seconds in a minute. The output should look like this:
// Enter the number of seconds: 31600000
// 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
#include <iostream>

using namespace std;

const unsigned int SecInDay = 86400;
const unsigned short SecInHour = 3600;
const unsigned short SecInMin = 60;

int main ()
{
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    unsigned int days;
    unsigned short hours;
    unsigned short min;
    unsigned short sec;
    days = seconds / SecInDay;
    hours = (seconds - (days * SecInDay)) /  SecInHour;
    min = ((seconds - (days * SecInDay)) - (hours * SecInHour)) / SecInMin;
    sec = seconds - (days * SecInDay) - (hours * SecInHour) - (min * SecInMin);
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << min << " minutes, "
    << sec << " seconds" << endl;
    
    return 0;
}
