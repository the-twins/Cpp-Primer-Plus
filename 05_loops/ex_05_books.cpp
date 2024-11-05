// You sell the book C++ for Fools. Write a program that has you enter a year’s worth
// of monthly sales (in terms of number of books, not of money). The program should
// use a loop to prompt you by month, using an array of char * (or an array of
// string objects, if you prefer) initialized to the month strings and storing the input
// data in an array of int. Then, the program should find the sum of the array contents and report
// the total sales for the year.
#include <iostream>

using namespace std;

const unsigned short Months = 12;

int main()
{
    string month[Months] = {"January", "February", "March", "April", "May", "June", "July", 
                            "August", "September", "October", "November", "December"};
    unsigned int books_in_month[Months] = {0};
    unsigned int sum_books = 0;
    for(int count = 0; count < Months; count++)
    {
        cout << "Enter the number of books sold in " << month[count] << " : ";
        cin >> books_in_month[count];
        sum_books += books_in_month[count];
    }
    cout << "You sold " << sum_books << " books in a year." << endl;
    
    return 0;
}
