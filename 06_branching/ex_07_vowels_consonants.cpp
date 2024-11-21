// Write a program that reads input a word at a time until a lone q is entered. The
// program should then report the number of words that began with vowels, the number that began
// with consonants, and the number that fit neither of those categories.
// One approach is to use isalpha() to discriminate between words beginning with
// letters and those that don’t and then use an if or switch statement to further identify those
// passing the isalpha() test that begin with vowels. A sample run might look like this:
// Enter words (q to quit):
// The 12 awesome oxen ambled
// quietly across 15 meters of lawn. q
// 5 words beginning with vowels
// 4 words beginning with consonants
// 2 others
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string text;
    unsigned int vowels = 0;
    unsigned int consonants = 0;
    unsigned int others = 0;
    cout << "Enter words (q to quit): ";
    while(cin >> text)
    {
        char ch = text[0];
        if(ch == 'q' || ch == 'Q')
        {
            if(text[1])
            {
                consonants++;
                continue;
            }
            else
                break;
        }
        if(isalpha(ch))
        {
            if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I'
               || ch == 'o' || ch == 'O' ||  ch == 'u' || ch == 'U' || ch == 'y' || ch == 'Y')
                vowels++;
            else
                consonants++;
        }
        else
            others++;
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << others << " others" << endl;

    return 0;
}
