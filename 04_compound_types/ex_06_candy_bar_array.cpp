// The CandyBar structure contains three members, as described in Programming
// Exercise 5. Write a program that creates an array of three CandyBar structures, 
// initializes them to values of your choice, and then displays the contents of each
// structure.
#include <iostream>

using namespace std;

const unsigned short LEN = 3;

struct candy_bar
{
    string brand_name;
    float weight;
    unsigned int numb_calories;
};

int main()
{
    candy_bar snack[LEN] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Twix", 1.2 , 502},
        {"Baskin Robbins", 2.2, 270}
    };
    int i;
    for(i = 0; i < LEN; i++)
    {
        cout << snack[i].brand_name << ", " << snack[i].weight << ", "
        << snack[i].numb_calories << endl;
    }
    
    return 0;
}
