// Do Programming Exercise 6 but modify it to get information from a file. The first item in the 
// file should be the number of contributors, and the rest of the file should consist of pairs of 
// lines, with the first line of each pair being a contributor’s name and the second line being a 
// contribution. That is, the file should look like this:
// 4
// Sam Stone
// 2000
// Freida Flass
// 100500
// Tammy Tubbs
// 5000
// Rich Raptor
// 55000
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct contribution{
    string name;
    double donate;
};

const double Grand = 10000.0;
const short Size = 30;
const short Max = 10;

int main()
{
    char filename[Size];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, Size);
    inFile.open(filename); 
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    short count;
    short i;
    short counter = 0;
    (inFile >> count).get();
    if (count <= 0 || count > Max)
    {
        cout << "Input error. Bye." << endl;
        return 0;
    }
    contribution * donat_list = new contribution[count];
    for(i = 0; i < count; i++)
    {
        getline(inFile, donat_list[i].name);
        (inFile >> donat_list[i].donate).get();
    }
    cout << "\nGrand Patrons" << endl;
    for(i = 0; i < count; i++)
    {
        if(donat_list[i].donate >= Grand)
        {
        cout << donat_list[i].name << " $" << donat_list[i].donate << endl;
            counter++;
        }
    }
    if(counter == 0)
        cout << "none" << endl;
    counter = 0;
    cout << "\nPatrons" << endl;   
    for(i = 0; i < count; i++)
    {
        if(donat_list[i].donate < Grand)
        {
            cout << donat_list[i].name << " $" << donat_list[i].donate << endl;
            counter++;
        }
    }
    if(counter == 0)
        cout << "none" << endl;
    inFile.close();
    delete [] donat_list;

    return 0;
}
