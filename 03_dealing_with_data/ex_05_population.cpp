// Write a program that requests the user to enter the current world population and
// the current population of the U.S. (or of some other nation of your choice). Store
// the information in variables of type long long. Have the program display the percent that the U.S.
// (or other nation’s) population is of the world’s population. The output should look something like this:
// Enter the world's population: 6898758899
// Enter the population of the US: 310783781
// The population of the US is 4.50492% of the world population.
// You can use the Internet to get more recent figures.
#include <iostream>

using namespace std;

const float Percent = 100.0;

int main()
{
    long long world_population;
    long long population_us;
    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> population_us;
    cout << "The population of the US is " << population_us * Percent / world_population 
    << " % of the world population." << endl;
    
    return 0;
}
