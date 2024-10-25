// William Wingate runs a pizza-analysis service. For each pizza, he needs to record
// the following information:
//     The name of the pizza company, which can consist of more than one word
//     The diameter of the pizza
//     The weight of the pizza
// Devise a structure that can hold this information and write a program that uses a
// structure variable of that type. The program should ask the user to enter each of the
// preceding items of information, and then the program should display that information.
// Use cin (or its methods) and cout.
#include <iostream>

using namespace std;

struct pizza
{
    string name_comp;
    float diameter;
    float weight;
};

int main()
{
    pizza information;
    cout << "Enter the name of the pizza company: ";
    getline(cin, information.name_comp);
    cout << "Enter the diameter of the pizza: ";
    cin >> information.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> information.weight;
    cout << "The name of the pizza company: " << information.name_comp << endl;
    cout << "The diameter of the pizza: " << information.diameter << endl;
    cout << "The weight of the pizza: " << information.weight << endl;
    
    return 0;
}
