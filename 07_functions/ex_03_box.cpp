// Here is a structure declaration:
// struct box
// {
//     char maker[40];
//     float height;
//     float width;
//     float length;
//     float volume;
// };
// a. Write a function that passes a box structure by value and that displays the value of each 
// member.
// b. Write a function that passes the address of a box structure and that sets the volume member 
// to the product of the other three dimensions.
// c. Write a simple program that uses these two functions.
#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume = 0;
};

void print_struct(struct box);
void volume(struct box &);

int main()
{
    struct box great_box;
    cout << "Enter maker name: ";
    cin >> great_box.maker;
    cout << "Enter height: ";
    cin >> great_box.height;
    cout << "Enter width: ";
    cin >> great_box.width;
    cout << "Enter length: ";
    cin >> great_box.length;
    volume(great_box);
    print_struct(great_box);
    
    return 0;
}

void print_struct(struct box great_box)
{
    cout << great_box.maker << ". Height: " << great_box.height <<". Width: " << great_box.width <<
            ". Length: " << great_box.length << ". Volume: " << great_box.volume << endl;
}

void volume(struct box & great_box)
{
    great_box.volume = great_box.height * great_box.width * great_box.length;
}
