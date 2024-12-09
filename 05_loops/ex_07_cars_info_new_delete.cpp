// Design a structure called car that holds the following information about an automobile: its 
// make, as a string in a character array or in a string object, and the year it was built, as an 
// integer. Write a program that asks the user how many cars to catalog. The program should then 
// use new to create a dynamic array of that many car structures. Next, it should prompt the user 
// to input the make (which might consist of more than one word) and year information for each 
// structure. Note that this requires some care because it alternates reading strings with numeric 
// data (see Chapter 4). Finally, it should display the contents of each structure. A sample run
// should look something like the following:
// How many cars do you wish to catalog? 2
// Car #1:
// Please enter the make: Hudson Hornet
// Please enter the year made: 1952
// Car #2:
// Please enter the make: Kaiser
// Please enter the year made: 1951
// Here is your collection:
// 1952 Hudson Hornet
// 1951 Kaiser
#include <iostream>

using namespace std;

struct cars {
    string make_car;
    unsigned short year_made;
};
const short MaxCar = 10;

int main()
{
    cout << "How many cars do you wish to catalog (up to 10)? ";
    short count_cars;
    unsigned short i;
    cin >> count_cars;
    if(count_cars <= 0 || count_cars > MaxCar)
    {
        cout << "Input error. Bye." << endl;
        return 0;
    }
    cars * car_info = new cars[count_cars];
    for(i = 0; i < count_cars; i++)
    {
        cin.get();
        cout << "Car #" << i + 1 << ": " << endl;
        cout << "Please enter the make: ";
        getline(cin, car_info[i].make_car);
        cout << "Please enter the year made: ";
        cin >> car_info[i].year_made;
    }
    cout << "Here is your collection:" << endl;
    
    for(i = 0; i < count_cars; i++)
        cout << car_info[i].year_made << " " << car_info[i].make_car << endl;
    delete [] car_info;
    
    return 0;
}
