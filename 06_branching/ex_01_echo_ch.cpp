// Write a program that reads keyboard input to the @ symbol and that echoes the
// input except for digits, converting each uppercase character to lowercase, and vice
// versa. (Don’t forget the cctype family.)
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    cout << "Enter text for analysis, and type @ to terminate input." << endl;
    char ch;
    cin.get(ch);
    while(ch != '@')
    {
        if(isdigit(ch))
            ;
        else if (isupper(ch))
        {
            ch = tolower(ch);
            cout << ch;
        }
        else if(islower(ch))
        {
            ch = toupper(ch);
            cout << ch;
        }
        else
            cout << ch;
        cin.get(ch);
    }
    cout << endl;
   
    return 0;
}
