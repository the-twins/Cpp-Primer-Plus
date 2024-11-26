// Define a recursive function that takes an integer argument and returns the factorial
// of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
// defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!. Test your function
// in a program that uses a loop to allow the user to enter various values for which the
// program reports the factorial.
#include <iostream>

using namespace std;

long factorial(short n);

int main()
{
    cout << "Enter a number to calculate the factorial: ";
    short numb;
    while(cin >> numb)
    {
        if (numb >= 1)
            cout << numb << "! = " << factorial(numb) << endl;
        else
            cout << "Only positive number input is accepted." << endl;
        cout << "Enter a number to calculate the factorial (q to quit): ";
    }
    cout << "Bye!" << endl;
    
    return 0;
}

long factorial(short n)
{
    if(n == 0)
            return 1;
    else
        return n * factorial(n - 1);
}
