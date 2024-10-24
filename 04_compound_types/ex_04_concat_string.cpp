// Write a program that asks the user to enter his or her first name and then last
// name, and that then constructs, stores, and displays a third string consisting of the
// user’s last name followed by a comma, a space, and first name. Use string objects
// and methods from the string header file. A sample run could look like this:
// Enter your first name: Flip
// Enter your last name: Fleming
// Here’s the information in a single string: Fleming, Flip
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string f_name;
    cout << "Enter your first name: ";
    getline(cin, f_name);
    string l_name;
    cout << "Enter your last name: ";
    getline(cin, l_name);
    string concat_string = f_name + ", " + l_name;
    cout << "Here’s the information in a single string: " << concat_string << endl;
    
    return 0;
}
