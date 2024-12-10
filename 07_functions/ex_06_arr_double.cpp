// Write a program that uses the following functions: Fill_array() takes as arguments the name of 
// an array of double values and an array size. It prompts the user to enter double values to be 
// entered in the array. It ceases taking input when the array is full or when the user enters 
// non-numeric input, and it returns the actual number of entries. Show_array() takes as arguments 
// the name of an array of double values and an array size and displays the contents of the array.
// Reverse_array() takes as arguments the name of an array of double values and an array size and 
// reverses the order of the values stored in the array. The program should use these functions to 
// fill an array, show the array, reverse the array, show the array, reverse all but the first and 
// last elements of the array, and then show the array.
#include <iostream>

using namespace std;

int Fill_array(double number[], int n);
void Show_array(double number[], int n);
void Reverse_array(double number[], int n);

int main()
{
    int n;
    cout << "Enter the numbber of array elements:";
    cin >> n;
    double number[n];
    int count = 0;
    count = Fill_array(number, n);
    Show_array(number, count);
    Reverse_array(number, count);
    Show_array(number, count);
    
    return 0;
}

int Fill_array(double number[], int n)
{
    int count = 0;
    int i;
    cout << "Enter numbers (up to " << n << ", q to quit): " << endl;
    for(i = 0; i < n; i++)
    {        
        cin >> number[i];
        if(!number[i])
            return count;
        count++;
    }
    return count;
}

void Show_array(double number[], int n)
{
    cout << "ARRAY" << endl;
    for(int i = 0; i < n; i++)
        cout << number[i] << endl;
}

void Reverse_array(double number[], int n)
{
    int i, j;
    double temp;
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = number[i];
        number[i] = number[j];
        number[j] = temp;
    }
    cout << "REVERSE" << endl;
}
