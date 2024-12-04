// Do Programming Exercise 7 (William Wingate runs a pizza-analysis service. For each pizza, he 
// needs to record the following information:
//     The name of the pizza company, which can consist of more than one word
//     The diameter of the pizza
//     The weight of the pizza
// Devise a structure that can hold this information and write a program that uses a structure 
// variable of that type. The program should ask the user to enter each of the preceding items of 
// information, and then the program should display that information. Use cin (or its methods) and 
// cout.) but use new to allocate a structure instead of declaring a structure variable. Also have 
// the program request the pizza diameter before it requests the pizza company name.
#include <iostream>

using namespace std;

const short Size = 10;

struct pizza {
    float diameter;
    string pizza_comp;
    float weight;
};

int main()
{
    pizza * point_to_struct = new pizza[Size];
    for(int count = 0; count < Size; count++)
    {
        cout << "Enter pizza diameter:(q to quit) ";
        cin >> point_to_struct[count].diameter;
        if(!point_to_struct[count].diameter)
            break;
        cin.get();
        cout << "Enter pizza company name: ";
        getline(cin, point_to_struct[count].pizza_comp);
        cout << "Enter pizza weight: ";
        cin >> point_to_struct[count].weight;
    }
    cout << endl;
    for(int count = 0; count < Size; count++)
        cout << "Diameter: " << point_to_struct[count].diameter << " '" << 
                point_to_struct[count].pizza_comp << "', Weight: " << 
                point_to_struct[count].weight << endl;
    delete [] point_to_struct;
    cout << "Bye" << endl;
    
    return 0;
}
