// Write a program that requests the user to enter two integers. The program should
// then calculate and report the sum of all the integers between and including the two
// integers. At this point, assume that the smaller integer is entered first. 
// For example, if the user enters 2 and 9, the program should report that the sum of all
// the integers from 2 through 9 is 44.
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two integers (the smaller integer is entered first): ";
    unsigned int first = 0, second = 0;
    cin >> first >> second;
    unsigned short count;
    unsigned int all_sum = 0;
    for(count = first; count <= second; ++count)
        all_sum += count;
    cout << "The sum of all the integers between " << first << " and " << second << " = "
    << all_sum << endl;

    return 0;
}
