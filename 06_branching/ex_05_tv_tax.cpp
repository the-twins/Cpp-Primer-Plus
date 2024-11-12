// The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following income tax
// code:
// First 5,000 tvarps: 0% tax
// Next 10,000 tvarps: 10% tax
// Next 20,000 tvarps: 15% tax
// Tvarps after 35,000: 20% tax
// For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
// 0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps. Write a program that uses a
// loop to solicit incomes and to report tax owed. The loop should terminate when
// the user enters a negative number or non-numeric input.
#include <iostream>

using namespace std;

const float First = 0.0;
const float Secont_tax = 0.10;
const float Third_tax = 0.15;
const float Fourth_tax = 0.20;
const float First_tv = 5000.0;
const float Second_tv = 10000.0;
const float Third_tv = 20000.0;

int main()
{
    double tvarps = 0;
    double tax = 0;
    
    cout << "Enter how many tvarps you earned (q to quit): ";
    while(cin >> tvarps && tvarps > 0)
    {
        if(tvarps > (First_tv + Second_tv + Third_tv))
            tax = ((tvarps - First_tv - Second_tv - Third_tv) * Fourth_tax) + Third_tv * Third_tax
                  + Second_tv * Secont_tax +  First;
        else if(tvarps > (First_tv + Second_tv))
            tax = ((tvarps - First_tv - Second_tv) * Third_tax) + Second_tv * Secont_tax + First;
        else if(tvarps > First_tv)
            tax = ((tvarps - First_tv) * Secont_tax) + First;
        else
        {
            cout << "You don't have to pay tax. Enter next amount to calculate tax (q to quit): ";
            continue;
        }            
        cout << "You have to pay " << tax << " tvarps tax." << endl;
        cout << "Enter the next amount to calculate tax (q to quit): ";
    }        
    cout << "Done." << endl;
    
    return 0;
}
