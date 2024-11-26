// Write a function that takes a reference to a string object as its parameter and that
// converts the contents of the string to uppercase. Use the toupper() function described in 
// Table 6.4 of Chapter 6. Write a program that uses a loop which allows you to test the function 
// with different input. A sample run might look like this:
// Enter a string (q to quit): go away
// GO AWAY
// Next string (q to quit): good grief!
// GOOD GRIEF!
// Next string (q to quit): q
// Bye.
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string upper_string(string text);

int main()
{
    string text;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, text) && text != "q")
    {
        cout << upper_string(text) << endl;
        cout << "Enter a string (q to quit): ";
    }
    cout << "Bye." << endl;
    
    return 0;
}

string upper_string(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if(islower(text[i]))
            text[i] = toupper(text[i]);
    }
    return text;
}
