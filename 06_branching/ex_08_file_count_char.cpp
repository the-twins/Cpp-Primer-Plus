// Write a program that opens a text file, reads it character-by-character to the end of
// the file, and reports the number of characters in the file.
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile; 
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename); 
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    inFile >> ch;
    while (inFile.good())
    {
        ++count;
        inFile >> ch;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
        cout << "Items read: " << count << endl;

    inFile.close();
    
    return 0;
}
