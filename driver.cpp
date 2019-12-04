#include "Pokemon.hpp"
#include <unistd.h>
#include <iostream> 

void displayMenu()
{
    cout << "Select a numerical option:" << endl;
    cout << "+=========Main Menu=========+" << endl;
    cout << " 1. View Pokemon by Type" << endl;
    cout << " 2. Search Pokemon by Name" << endl;
    cout << " 3. Create Your Own Pokemon" << endl;
    cout << " 4. Quit " << endl;
    cout << "+--------------------------+" << endl;
    cout << "#> ";

}

int main(int argc, char* argv[])
{
    cout << endl; 
    string s = "          Welcome to   ";
    string l = "        P O K E H A S H";
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << flush;
        usleep(100000);

    }
    cout << endl;
    for(int j = 0; j < l.size(); j++)
    {
        cout << l[j] << flush;
        usleep(50000);
    }
    // cout << "   Welcome to   " << endl;
    // cout << " P O K E H A S H " << endl;
    cout << endl << endl; 

    string userFile = argv[1]; 
    string choice;
    PokeHash p; 
    p.readInPokemonFile();
    p.readInUserFile(userFile); 

    while(choice != "4")
    {
        displayMenu(); 
        cin >> choice; 
        while(choice != "1" && choice != "2" && choice != "3" && choice != "4")
        {
            cout << "Please enter a number between 1-4 " << endl; 
            cout << "#> ";
            cin >> choice; 
        }

        switch(stoi(choice))
        {

            case 1: 
            {
                p.printPokemonByTypes();
                cout << endl;
                break;
            }

            case 2:
            {
                cin.ignore();
                string name; 
                cout << "Please enter name of Pokemon: ";
                cin>>name; 
                cout << endl;
                p.printPokemonFromHash(name);
                cout << endl;

                break;
            }

            case 3:
            {
                cin.ignore(); 
                string name; 
                cout << "Enter the name of the Pokemon you would like to add: ";
                cin>>name;
                cout << endl;
                p.insertPokemon(name, userFile);
                break;
            }

            default:
            {
                cout << "Good bye!" << endl;
                cout << "⣿⣿⣿⣿⣿⡏⠉⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⠀⠀⠀⠈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠙⠿⠿⠿⠻⠿⠿⠟⠿⠛⠉⠀⠀⠀⠀⠀⣸⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣷⣄⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣴⣿⣿⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⢰⣹⡆⠀⠀⠀⠀⠀⠀⣭⣷⠀⠀⠀⠸⣿⣿⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠀⠈⠉⠀⠀⠤⠄⠀⠀⠀⠉⠁⠀⠀⠀⠀⢿⣿⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⢾⣿⣷⠀⠀⠀⠀⡠⠤⢄⠀⠀⠀⠠⣿⣿⣷⠀⢸⣿⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⡀⠉⠀⠀⠀⠀⠀⢄⠀⢀⠀⠀⠀⠀⠉⠉⠁⠀⠀⣿⣿⣿" << endl;
                usleep(100000);
                cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿" << endl;

                break;
            }

        }

    }



}
