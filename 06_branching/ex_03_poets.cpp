// Write a precursor to a menu-driven program. The program should display a menu
// offering four choices, each labeled with a letter. If the user responds with a letter
// other than one of the four valid choices, the program should prompt the user to
// enter a valid response until the user complies. Then the program should use a
// switch to select a simple action based on the user’s selection. A program run could
// look something like this:
// Please enter one of the following choices:
// c) carnivore p) pianist
// t) tree g) game
// f
// Please enter a c, p, t, or g: q
// Please enter a c, p, t, or g: t
// A maple is a tree.
#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter one of the following choices:" << endl;
    cout << "l) Lermontov  m) Mayakovsky" << endl;
    cout << "p) Pushkin    y) Yesenin" << endl;
    char choice;
    cin >> choice;
    while(choice != 'q')
    {
        switch(choice)
        {
            case 'l': cout << "I’m alone on the path just taken;\n";
                      cout << "Glittering, it stretches through the fog;\n";
                      cout << "Quiet night. All harkens to the Maker,\n";
                      cout << "And two stars begin a dialogue.\n";
                      choice = 'q';
                      break;
            case 'm': cout << "Listen,\n";
                      cout << "if stars are lit\n";
                      cout << "it means — there is someone who needs it.\n";
                      cout << "It means — someone wants them to be,\n";
                      cout << "that someone deems those specks of spit\n";
                      cout << "magnificent.\n";
                      choice = 'q';
                      break;
            case 'p': cout << "A captive, alone in a dungeon I dwell,\n";
                      cout << "Entombed in the stillness and murk of a cell.\n";
                      cout << "Outside, in the courtyard, in wild, frenzied play,\n";
                      cout << "My comrade, an eagle, has pounced on his prey.\n";
                      choice = 'q';
                      break;
            case 'y': cout << "Stars little stars, you're so high and so clear!\n";
                      cout << "What have you got in you, so fascinating?\n";
                      cout << "Stars, deep in thought, so discreet you appear,\n";
                      cout << "What is the power that makes you so tempting?\n";
                      choice = 'q';
                      break;
            default : cout << "Please enter: l, m, p, or y: ";
                      cin >> choice;
                      break;
        }
    }
    cout << "Bye!" << endl;

    return 0;
}
