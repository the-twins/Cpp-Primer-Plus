// Write a C++ program that asks for a distance in furlongs and converts it to yards.
// (One furlong is 220 yards.)
#include <iostream>

using namespace std;

const int YardsInFurlong = 220;

int main()
{
    float input_furlong;
    cout << "Enter distance in furlongs: ";
    cin >> input_furlong;
    cout << input_furlong << " furlongs is " << input_furlong * YardsInFurlong << " yards." << endl;
    
    return 0;
}
