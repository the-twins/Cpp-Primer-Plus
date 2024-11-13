// Write a program that matches the description of the program in Programming
// Exercise 8 (Write a program that uses an array of char and a loop to read one word at a time
// until the word done is entered. The program should then report the number of
// words entered (not counting done). A sample run could look like this:
// Enter words (to stop, type the word done):
// anteater birthday category dumpster
// envy finagle geometry done for sure
// You entered a total of 7 words.
// You should include the cstring header file and use the strcmp() function to
// make the comparison test.), but use a string class object instead of an array. Include the 
// string header file and use a relational operator to make the comparison test.
#include <iostream>

using namespace std;

const string End = "done";

int main()
{
    string text;
    short count = 0;
    cout << "Enter words (to stop, type the word done): ";
    while(cin >> text)
    {
        if(text == End)
            break;
        count++;
    }
    cout << "You entered a total of " << count << " words." << endl;

    return 0;
}
