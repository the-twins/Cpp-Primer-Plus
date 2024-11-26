// Write a program that asks the user to enter up to 10 golf scores, which are to be stored in an
// array. You should provide a means for the user to terminate input prior to entering 10 scores.
// The program should display all the scores on one line and report the average score. Handle 
// input, display, and the average calculation with three separate array-processing functions.
#include <iostream>

using namespace std;

const int Size = 10;

int input_ar(int scores[], int n);
void display_ar(int scores[], int count);
double average(int scores[], int count);

int main()
{
    int scores[Size] = {0};
    int count = input_ar(scores, Size);
    display_ar(scores, count);
    cout << "Average = " << average(scores, count) << endl;
    
    return 0;
}

int input_ar(int scores[], int n)
{
    cout << "Enter up to 10 golf scores (press q to terminate input): ";
    int i;
    char temp = 0;
    int count = 0;
    for(i = 0; i < n; i++)
    {    
        if (!(cin >> scores[i])) 
        {
            cin.clear(); 
            return count;
        }
        cout << "Enter the next result or q to quit: ";
        count++;            
    }
    return count;
}

void display_ar(int scores[], int count)
{
    int i;
    for(i = 0; i < count; i++)
        cout << scores[i] << " ";
    cout << endl;
}

double average(int scores[], int count)
{
    int i;
    double sum = 0.0;
    for(i = 0; i < count; i++)
        sum += scores[i];
    
    return sum / count;
}
