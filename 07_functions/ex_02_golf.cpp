// Write a program that asks the user to enter up to 10 golf scores, which are to be stored in an
// array. You should provide a means for the user to terminate input prior to entering 10 scores.
// The program should display all the scores on one line and report the average score. Handle 
// input, display, and the average calculation with three separate array-processing functions.
#include <iostream>

using namespace std;

int Size = 10;

int input_ar(int array[], int n);
void display_ar(int array[], int n);
double average(int array[], int n, int count);

int main()
{
    int array[Size] = {0};
    cout << "Enter up to 10 golf scores (press q to terminate input): ";
    int count = input_ar(array, Size);
    display_ar(array, Size);
    cout << "Average = " << average(array, Size, count) << endl;
    
    return 0;
}

int input_ar(int array[], int n)
{
    int i;
    char temp = 0;
    int count = 0;
    for(i = 0; i < n; i++)
    {    
        while (!(cin >> array[i])) 
        {
            cin.clear(); 
            return count;
        }
        cout << "Enter the next result or q to quit: ";
        count++;            
    }
    return count;
}

void display_ar(int array[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

double average(int array[], int n, int count)
{
    int i;
    double sum = 0.0;
    for(i = 0; i < n; i++)
        sum += array[i];
    
    return sum / count;
}
