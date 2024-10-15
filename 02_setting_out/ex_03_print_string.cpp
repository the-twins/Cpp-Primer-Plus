// Write a C++ program that uses three user-defined functions (counting main() as
// one) and produces the following output:
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// One function, called two times, should produce the first two lines, and the remaining 
// function, also called twice, should produce the remaining output.
#include <iostream>

using namespace std;

int print_first_string();
int print_second_string();

int main()
{
    print_first_string();
    print_first_string();
    print_second_string();
    print_second_string();
    
    return 0;
}

int print_first_string()
{
    cout << "Three blind mice" << endl;
    
    return 0;
}

int print_second_string()
{
    cout << "See how they run" << endl;

    return 0;
}
