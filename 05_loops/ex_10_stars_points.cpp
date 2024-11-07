// Write a program using nested loops that asks the user to enter a value for the
// number of rows to display. It should then display that many rows of asterisks, with
// one asterisk in the first row, two in the second row, and so on. For each row, the
// asterisks are preceded by the number of periods needed to make all the rows
// display a total number of characters equal to the number of rows.A sample run
// would look like this:
// Enter number of rows: 5
// ....*
// ...**
// ..***
// .****
// *****
#include <iostream>

using namespace std;

int main()
{
    int row = 0;
    int col = 0;
    int i, j;
    cout << "Enter number of rows: ";
    cin >> row;
    col = row;
    char stars_points[row][col];
    for(i = 0; i < row; i++)
        for(j = 0; j < col; j++)
            stars_points[i][j] = '.';
    j = col - 1;
    for(i = 0; i < row; i++)
    {
        for(; j < col; j++)
            stars_points[i][j] = '*';
        j = (col - 1) - (i + 1);
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            cout << stars_points[i][j];
        cout << endl;
    }

    return 0;
}
