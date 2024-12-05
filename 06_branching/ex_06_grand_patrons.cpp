// Put together a program that keeps track of monetary contributions to the Society for the 
// Preservation of Rightful Influence. It should ask the user to enter the number of contributors 
// and then solicit the user to enter the name and contribution of each contributor.The information
// should be stored in a dynamically allocated array of structures. Each structure should have two
// members: a character array (or else a string object) to store the name and a double member to 
// hold the amount of the contribution. After reading all the data, the program should display the 
// names and amounts donated for all donors who contributed $10,000 or more. This list should be 
// headed by the label Grand Patrons. After that, the program should list the remaining donors.
// That list should be headed Patrons. If there are no donors in one of the categories, the program
// should print the word “none.” Aside from displaying two categories, the program need do no 
// sorting.
#include <iostream>

using namespace std;

struct contribution{
    string name;
    double donate;
};

const double Grand = 10000.0;

int main()
{
    cout << "Enter the number of contributors: ";
    unsigned short count;
    unsigned short i;
    unsigned short counter = 0;
    cin >> count;
    if (count <= 0)
    {
        cout << "Input error. Bye." << endl;
        return 0;
    }
    contribution * donat_list = new contribution[count];
    for(i = 0; i < count; i++)
    {
        cin.get();
        cout << "Enter the contributor's name: ";
        getline(cin, donat_list[i].name);
        cout << "Enter donation amount: ";
        cin >> donat_list[i].donate;
    }
    cout << "\nGrand Patrons" << endl;
    for(i = 0; i < count; i++)
    {
        if(donat_list[i].donate >= Grand)
        {
            cout << donat_list[i].name << " " << donat_list[i].donate << "$" << endl;
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
            cout << donat_list[i].name << " " << donat_list[i].donate << "$" << endl;
            counter++;
        }
    }
    if(counter == 0)
        cout << "none" << endl;
    delete [] donat_list;
    
    return 0;
}
