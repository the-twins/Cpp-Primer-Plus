// Do Programming Exercise 5 but use a two-dimensional array to store input for 3
// years of monthly sales. Report the total sales for each individual year and for the
// combined years.
#include <iostream>

using namespace std;

const unsigned short Months = 12;
const unsigned short Years = 3;

int main()
{
    string month[Months] = {"January", "February", "March", "April", "May", "Jun", "July", 
    "August", "September", "October", "November", "December"};
    unsigned int books_in_month[Years][Months] = {0};
    unsigned int sum_books_in_year[Years] = {0};
    unsigned int sum_books_all = 0;
    for(int i = 0; i < Years; i++)
        for(int j = 0; j < Months; j++)
        {
            if(i == 0)
                cout << "First year. ";
            if(i == 1)
                cout << "Second year. ";
            if(i == 2)
                cout << "Third year. ";
            cout << "Enter the number of books sold in " << month[j] << " : ";
            cin >> books_in_month[i][j];
            sum_books_all += books_in_month[i][j];
            sum_books_in_year[i] += books_in_month[i][j];
        }
    cout << "You sold " << sum_books_in_year[0] << " books in a first year." << endl;
    cout << "You sold " << sum_books_in_year[1] << " books in a second year." << endl;
    cout << "You sold " << sum_books_in_year[2] << " books in a third year." << endl;
    cout << "In just " << Years << " years, " << sum_books_all << " books were sold." << endl;
    
    return 0;
}
