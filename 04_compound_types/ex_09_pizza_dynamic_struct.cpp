// Do Programming Exercise 6, but instead of declaring an array of three CandyBar structures, use 
// new to allocate the array dynamically
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
    short size;
    cout << "Enter how many structures need to be created (no more than 10): ";
    cin >> size;
    if(size <= 0 || size > 10)
    {
        cout << "Input error. Bye." << endl;
        return 0;
    }
    pizza * point_to_struct = new pizza[size];
    for(int count = 0; count < size; count++)
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
    for(int count = 0; count < size; count++)
        cout << "Diameter: " << point_to_struct[count].diameter << ", '" << 
                point_to_struct[count].pizza_comp << "', Weight: " << 
                point_to_struct[count].weight << endl;
    delete [] point_to_struct;
    cout << "Bye" << endl;
    
    return 0;
}
