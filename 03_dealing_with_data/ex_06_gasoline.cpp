// Write a program that asks how many miles you have driven and how many gallons
// of gasoline you have used and then reports the miles per gallon your car has gotten.
// Or, if you prefer, the program can request distance in kilometers and petrol in liters
// and then report the result European style, in liters per 100 kilometers.
#include <iostream>

using namespace std;

const float Km = 100.0;

int main()
{
    float distance_km;
    float liters;
    cout << "Enter distance in kilometers: ";
    cin >> distance_km;
    cout << "Enter how many liters of gasoline you have used: ";
    cin >> liters;
    cout << "Gasoline consumption per 100 km is " << Km * liters / distance_km << endl;

    return 0;
}
