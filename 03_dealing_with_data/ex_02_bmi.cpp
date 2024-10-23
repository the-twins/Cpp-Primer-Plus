// Write a short program that asks for your height in feet and inches and your weight
// in pounds. (Use three variables to store the information.) Have the program report
// your body mass index (BMI). To calculate the BMI, first convert your height in feet
// and inches to your height in inches (1 foot = 12 inches). Then convert your height
// in inches to your height in meters by multiplying by 0.0254. Then convert your
// weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
// your BMI by dividing your mass in kilograms by the square of your height in
// meters. Use symbolic constants to represent the various conversion factors.
#include <iostream>

using namespace std;

const unsigned short InchInFeet = 12;
const float HeightInMeters = 0.0254;
const float LbInKg = 2.2;

int main()
{
    unsigned short feet;
    unsigned short inches;
    float weight_in_pounds;
    cout << "Enter your height in feet and inches: ";
    cin >> feet;
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> weight_in_pounds;
    unsigned short height_in_inches;
    height_in_inches = feet * InchInFeet + inches;
    float height_in_meters = height_in_inches * HeightInMeters;
    float weight_in_kg;
    weight_in_kg = weight_in_pounds / LbInKg;
    float bmi = weight_in_kg / (height_in_meters * height_in_meters);
    cout << "Your BMI is " << bmi << endl;
    
    return 0;
}
