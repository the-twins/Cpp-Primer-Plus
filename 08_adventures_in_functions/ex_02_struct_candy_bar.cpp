// The CandyBar structure contains three members. The first member holds the brand name of a candy 
// bar. The second member holds the weight (which may have a fractional part) of the candy bar, and
// the third member holds the number of calories (an integer value) in the candy bar. Write a 
// program that uses a function that takes as arguments a reference to CandyBar, a pointer-to-char,
// a double, and an int and uses the last three values to set the corresponding members of the 
// structure. The last three arguments should have default values of “Millennium Munch,” 2.85, and 
// 350. Also the program should use a function that takes a reference to a CandyBar as an
// argument and displays the contents of the structure. Use const where appropriate.
#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar
{
    char brand_name[50];
    double weight;
    int calories;
};

void print_struct(const CandyBar &);
void add_inform(CandyBar &, const char * str = "Millennium Munch", double w = 2.85, int c = 350);
                
int main()
{
    CandyBar candy;
    add_inform(candy);
    print_struct(candy);
    add_inform(candy, "Taste Pleasure");
    print_struct(candy);
    add_inform(candy, "Taste Pleasure", 4.5);
    print_struct(candy);
    add_inform(candy, "Taste Pleasure", 4.5, 480);
    print_struct(candy);
    
    return 0;
}

void add_inform(CandyBar &candy, const char * str, double w, int c)
{
    strcpy(candy.brand_name, str);
    candy.weight = w;
    candy.calories = c;
}

void print_struct(const CandyBar &candy)
{
    cout << candy.brand_name << ", " << candy.weight << ", " << candy.calories << endl;
}
