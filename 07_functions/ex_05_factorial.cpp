// Define a recursive function that takes an integer argument and returns the factorial
// of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
// defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!. Test your function
// in a program that uses a loop to allow the user to enter various values for which the
// program reports the factorial.
#include <iostream>

using namespace std;

unsigned int factorial(unsigned int n);

int main()
{
    cout << "Enter a number to calculate the factorial: ";
    unsigned int numb;
    while(cin >> numb)
    {
        if(numb == 0)
            cout << "0! = 1" << endl;
        else if (numb >= 1)
            cout << numb << "! = " << factorial(numb) << endl;
        cout << "Enter a number to calculate the factorial (q to quit): ";
    }
    cout << "Bye!" << endl;
    
    return 0;
}

unsigned int factorial(unsigned int n)
{
    if(n == 1)
        return n;
    else
        return n * factorial(n - 1);
}
