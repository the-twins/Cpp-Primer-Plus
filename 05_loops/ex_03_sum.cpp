// Write a program that asks the user to type in numbers. After each entry, the 
// program should report the cumulative sum of the entries to date. The program should
// terminate when the user enters 0.
#include <iostream>

using namespace std;

int main()
{
    int numb = 0;
    int sum = 0;
    cout << "Enter a number to sum (0 to quit): ";
    cin >> numb;
    while (numb != 0)
    {
        sum += numb;
        cout << "Your result is " << sum << endl;
        cout << "Enter a number to sum (0 to quit): ";
        cin >> numb;
    }
    cout << "Bye!" << endl;

    return 0;
}
