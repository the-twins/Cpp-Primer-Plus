// Write a C++ program that requests and displays information as shown in the following example of output:
// What is your first name? Betty Sue
// What is your last name? Yewe
// What letter grade do you deserve? B
// What is your age? 22
// Name: Yewe, Betty Sue
// Grade: C
// Age: 22
// Note that the program should be able to accept first names that comprise more
// than one word. Also note that the program adjusts the grade downward—that is, up
// one letter. Assume that the user requests an A, a B, or a C so that you don’t have to
// worry about the gap between a D and an F.
#include <iostream>
#include <string>

using namespace std;

const unsigned short LEN = 30;

int main()
{
    string f_name;
    cout << "What is your first name? ";
    getline(cin, f_name);
    char l_name[LEN];
    cout << "What is your last name? ";
    cin >> l_name;
    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    unsigned short age;
    cout << "What is your age? ";
    cin >> age;
    grade = grade + 1;
    cout << "Name: " << l_name << ", " << f_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: "<< age << endl;
    
    return 0;
}
