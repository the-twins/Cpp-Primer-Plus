// Write a program that reads up to 10 donation values into an array of double. (Or, if
// you prefer, use an array template object.) The program should terminate input on
// non-numeric input. It should report the average of the numbers and also report
// how many numbers in the array are larger than the average.
#include <iostream>

using namespace std;

const short Max = 10;

int main()
{
    double donation[Max] = {0.0};
    cout << "Please enter donation amount.\n";
    cout << "You may enter up to " << Max << " donations <q to terminate>.\n";
    cout << "donation #1: ";
    int i = 0;
    while (i < Max && cin >> donation[i]) 
    {  
        if (++i < Max)
            cout << "donation #" << i+1 << ": ";
    }
    double total = 0.0;
    for (int j = 0; j < i; j++)
    total += donation[j];
    double average_donation = total / i;
    if (i == 0)
        cout << "No donations\n";
    else
        cout << average_donation << " = average of " << i << " donations." << endl;
    int number_larger = 0;
    for (int count = 0; count < i; count++)
        if(donation[count] > average_donation)
            number_larger++;
    cout << number_larger << " numbers of donation larger than average donations." << endl; 
    cout << "Done." << endl;
    
    return 0;
}
