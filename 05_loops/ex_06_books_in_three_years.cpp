// Do Programming Exercise 5 but use a two-dimensional array to store input for 3
// years of monthly sales. Report the total sales for each individual year and for the
// combined years.
#include <iostream>

using namespace std;

const unsigned short Months = 12;
const unsigned short Years = 3;

int main()
{
    string month[Months] = {"January", "February", "March", "April", "May", "June", "July", 
                            "August", "September", "October", "November", "December"};
    string count_year[Years] = {"First", "Second", "Third"};
    unsigned int books_in_month[Years][Months] = {0};
    unsigned int sum_books_in_year[Years] = {0};
    unsigned int sum_books_all = 0;
    for(int i = 0; i < Years; i++)
        for(int j = 0; j < Months; j++)
        {
            cout << count_year[i] << " year. Enter the number of books sold in " 
            << month[j] << " : ";
            cin >> books_in_month[i][j];
            sum_books_all += books_in_month[i][j];
            sum_books_in_year[i] += books_in_month[i][j];
        }
    for(int count = 0; count < Years; count++)
    {   
        cout << count_year[count] << " year. You sold " << sum_books_in_year[count] << " books."
            << endl;
    }       
    cout << "In just " << Years << " years, " << sum_books_all << " books were sold." << endl;
    
    return 0;
}
