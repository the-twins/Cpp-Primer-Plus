// Write a program that has main() call a user-defined function that takes a Celsius
// temperature value as an argument and then returns the equivalent Fahrenheit value.
// The program should request the Celsius value as input from the user and display
// the result, as shown in the following code:
// Please enter a Celsius value: 20
// 20 degrees Celsius is 68 degrees Fahrenheit.
// For reference, here is the formula for making the conversion:
// Fahrenheit = 1.8 × degrees Celsius + 32.0
#include <iostream>

using namespace std;

float fahrenheit(float degrees_cels);

int main()
{
    float degrees_cels;
    cout << "Please enter a Celsius value: ";
    cin >> degrees_cels;
    cout << degrees_cels << " degrees Celsius is " << fahrenheit(degrees_cels) << " degrees Fahrenheit." << endl;
    
    return 0;
}

float fahrenheit(float degrees_cels)
{
    return 1.8 * degrees_cels + 32.0;
}
