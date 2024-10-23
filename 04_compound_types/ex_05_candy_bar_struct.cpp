// The CandyBar structure contains three members.The first member holds the brand
// name of a candy bar. The second member holds the weight (which may have a fractional part) of
// the candy bar, and the third member holds the number of calories (an integer value) in the candy bar.
// Write a program that declares such a structure and creates a CandyBar variable called snack,
// initializing its members to "Mocha Munch", 2.3, and 350, respectively. The initialization should be
// part of the declaration for snack. Finally, the program should display the contents of the snack variable.
#include <iostream>

using namespace std;

struct candy_bar
{
    string brand_name;
    float weight;
    unsigned int numb_calories;
};

int main()
{
    candy_bar snack =
    {
        "Mocha Munch",
        2.3,
        350
    };
    cout << snack. brand_name << ", " << snack. weight << ", "<< snack.numb_calories 
    << endl;
    
    return 0;
}
