#include "Pokemon.hpp"
#include <string>
#include <iostream> 
#include <unistd.h>
#include <fstream> 
#include <sstream>
#include <vector> 
#include <math.h> 

PokeHash::PokeHash()
{
    for (int i = 0; i < tableSize; i++)
    {
        table[i] = nullptr; 
    }
}


unsigned int PokeHash::hashFunction(string key)
{  
    for(int i = 0; i < key.size(); i++)
    {
        key[i] = tolower(key[i]); 
    }
    
    int hash = 0; 
    for (int i = 0; i < key.size(); i++)
    {
        hash = hash + int(key[i]);
    }
    return (hash%tableSize); 
}

void PokeHash::sort(pokeNode *pokemon)
{
    if(pokemon->type1 == "Normal" || pokemon->type2 == "Normal")
    {
        normal.push_back(pokemon);
    }
    if(pokemon->type1 == "Fire" || pokemon->type2 == "Fire")
    {
        fire.push_back(pokemon);
    }
    if(pokemon->type1 == "Water" || pokemon->type2 == "Water")
    {
        water.push_back(pokemon);
    }
    if(pokemon->type1 == "Grass" || pokemon->type2 == "Grass")
    {
        grass.push_back(pokemon);
    }
    if(pokemon->type1 == "Electric" || pokemon->type2 == "Electric")
    {
        electric.push_back(pokemon);
    }
    if(pokemon->type1 == "Ice" || pokemon->type2 == "Ice")
    {
        ice.push_back(pokemon);
    }
    if(pokemon->type1 == "Fighting" || pokemon->type2 == "Fighting")
    {
        fighting.push_back(pokemon);
    }
    if(pokemon->type1 == "Poison" || pokemon->type2 == "Poison")
    {
        poison.push_back(pokemon);
    }
    if(pokemon->type1 == "Ground" || pokemon->type2 == "Ground")
    {
        ground.push_back(pokemon);
    }
    if(pokemon->type1 == "Flying" || pokemon->type2 == "Flying")
    {
        flying.push_back(pokemon);
    }
    if(pokemon->type1 == "Psychic" || pokemon->type2 == "Psychic")
    {
        psychic.push_back(pokemon);
    }
    if(pokemon->type1 == "Bug" || pokemon->type2 == "Bug")
    {
        bug.push_back(pokemon);
    }
    if(pokemon->type1 == "Rock" || pokemon->type2 == "Rock")
    {
        rock.push_back(pokemon);
    }
    if(pokemon->type1 == "Ghost" || pokemon->type2 == "Ghost")
    {
        ghost.push_back(pokemon);
    }
    if(pokemon->type1 == "Dark" || pokemon->type2 == "Dark")
    {
        dark.push_back(pokemon);
    }
    if(pokemon->type1 == "Dragon" || pokemon->type2 == "Dragon")
    {
        dragon.push_back(pokemon);
    }
    if(pokemon->type1 == "Steel" || pokemon->type2 == "Steel")
    {
        steel.push_back(pokemon);
    }
    if(pokemon->type1 == "Fairy" || pokemon->type2 == "Fairy")
    {
        fairy.push_back(pokemon);
    }
}
//maybe have print return true or false. returns false when the vector size is 0 so that user cannot pick
bool PokeHash::printByType(int type)
{
    if(type == 1)
    {
        if(normal.size() == 0)
        {
            cout << "There are no Normal Pokemon" << endl << endl; 
            return false;
        }
        cout << "Normal Pokemon: " << endl;
        for(int i = 0; i < normal.size(); i++)
        {
            cout << i + 1 << ": " << normal[i]->name << endl;
        }
        cout << endl;
    }
    if(type == 2)
    {
        if(fire.size() == 0)
        {
            cout << "There are no Fire Pokemon" << endl << endl; 
            return false;
        }
        cout << "Fire Pokemon: " << endl; 
        for(int i = 0; i < fire.size(); i++)
        {
            cout << i + 1 << ": " << fire[i]->name << endl;
        }
        cout << endl;
    }
    if(type == 3)
    {
        if(water.size() == 0)
        {
            cout << "There are no Water Pokemon" << endl << endl; 
            return false;
        }
        cout << "Water Pokemon: " << endl;
        for(int i = 0; i < water.size(); i++)
        {
            cout << i + 1 << ": " << water[i]->name << endl;
        }
        cout << endl;
    }
    if(type == 4)
    {
        if(grass.size() == 0)
        {
            cout << "There are no Grass Pokemon" << endl << endl; 
            return false;
        }
        cout << "Grass Pokemon: " << endl;
        for(int i = 0; i < grass.size(); i++)
        {
            cout << i + 1 << ": " << grass[i]->name << endl;
        }

        cout << endl;
    
    }
    if(type == 5)
    {
        if(electric.size() == 0)
        {
            cout << "There are no Electric Pokemon" << endl << endl; 
            return false;
        }
        cout << "Electric Pokemon: " << endl;
        for(int i = 0; i < electric.size(); i++)
        {
            cout << i + 1 << ": " << electric[i]->name << endl;
        }

        cout << endl;
        
    }
    if(type == 6)
    {
        if(ice.size() == 0)
        {
            cout << "There are no Ice Pokemon" << endl << endl; 
            return false;
        }
        cout << "Ice Pokemon: " << endl;
        for(int i = 0; i < ice.size(); i++)
        {
            cout << i + 1 << ": " << ice[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 7)
    {
        if(fighting.size() == 0)
        {
            cout << "There are no Fighting Pokemon" << endl << endl; 
            return false;
        }
        cout << "Fighting Pokemon: " << endl;
        for(int i = 0; i < fighting.size(); i++)
        {
            cout << i + 1 << ": " << fighting[i]->name << endl;
        }

        cout << endl;

    }
    if(type == 8)
    {
        if(poison.size() == 0)
        {
            cout << "There are no Poison Pokemon" << endl << endl; 
            return false;
        }
        cout << "Poison Pokemon: " << endl;
        for(int i = 0; i < poison.size(); i++)
        {
            cout << i + 1 << ": " << poison[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 9)
    {
        if(ground.size() == 0)
        {
            cout << "There are no Ground Pokemon" << endl << endl; 
            return false;
        }
        cout << "Ground Pokemon: " << endl;
        for(int i = 0; i < ground.size(); i++)
        {
            cout << i + 1 << ": " << ground[i]->name << endl;
        }
        cout << endl;
    }
    if(type == 10)
    {
        if(flying.size() == 0)
        {
            cout << "There are no Flying Pokemon" << endl << endl; 
            return false;
        }
        cout << "Flying Pokemon: " << endl;
        for(int i = 0; i < flying.size(); i++)
        {
            cout << i + 1 << ": " << flying[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 11)
    {
        if(psychic.size() == 0)
        {
            cout << "There are no Psychic Pokemon" << endl << endl; 
            return false;
        }
        cout << "Psychic Pokemon: " << endl;
        for(int i = 0; i < psychic.size(); i++)
        {
            cout << i + 1 << ": " << psychic[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 12)
    {
        if(bug.size() == 0)
        {
            cout << "There are no Bug Pokemon" << endl << endl; 
            return false;
        }
        cout << "Bug Pokemon: " << endl;
        for(int i = 0; i < bug.size(); i++)
        {
            cout << i + 1 << ": " << bug[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 13)
    {
        if(rock.size() == 0)
        {
            cout << "There are no Rock Pokemon" << endl << endl; 
            return false;
        }
        cout << "Rock Pokemon: " << endl;
        for(int i = 0; i < rock.size(); i++)
        {
            cout << i + 1 << ": " << rock[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 14)
    {
        if(ghost.size() == 0)
        {
            cout << "There are no Ghost Pokemon" << endl << endl; 
            return false;
        }
        cout << "Ghost Pokemon: " << endl;
        for(int i = 0; i < ghost.size(); i++)
        {
            cout << i + 1 << ": " << ghost[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 15)
    {
        if(dark.size() == 0)
        {
            cout << "There are no Dark Pokemon" << endl << endl; 
            return false;
        }
        cout << "Dark Pokemon: " << endl;
        for(int i = 0; i < dark.size(); i++)
        {
            cout << i + 1 << ": " << dark[i]->name << endl;
        }

        cout << endl;
  
    }
    if(type == 16)
    {
        if(dragon.size() == 0)
        {
            cout << "There are no Dragon Pokemon" << endl << endl; 
            return false;
        }
        cout << "Dragon Pokemon: " << endl;
        for(int i = 0; i < dragon.size(); i++)
        {
            cout << i + 1 << ": " << dragon[i]->name << endl;
        }

        cout << endl;

    }
    if(type == 17)
    {
        if(steel.size() == 0)
        {
            cout << "There are no Steel Pokemon" << endl << endl; 
            return false;
        }
        cout << "Steel Pokemon: " << endl;
        for(int i = 0; i < steel.size(); i++)
        {
            cout << i + 1 << ": " << steel[i]->name << endl;
        }

        cout << endl;
    }
    if(type == 18)
    {
        if(fairy.size() == 0)
        {
            cout << "There are no Fairy Pokemon" << endl << endl; 
            return false;
        }
        cout << "Fairy Pokemon: " << endl;
        for(int i = 0; i < fairy.size(); i++)
        {
            cout << i + 1 << ": " << fairy[i]->name << endl;
        }
        cout << endl;
    }
    return true;
}

string toLower(string name)
{
    for(int i = 0; i<name.size(); i++)
    {
        name[i] = tolower(name[i]);
    }
    return name;
}
pokeNode* PokeHash::searchPokemon(string name)
{
    int index = hashFunction(name); 
    pokeNode* temp = table[index];

    while(temp != NULL)
    {
        if(toLower(temp->name) == toLower(name))
        {
            return temp;
        }
        temp = temp->next;
    }

    return NULL;
}

void PokeHash::readInPokemonFile()
{
    ifstream myfile;
    myfile.open("pokemon.tsv");
    if(myfile.is_open())
    {
        string line = "";
        int lineidx = 0;

        while(getline(myfile,line))
        {
            stringstream str(line);
            string index; 
            string name;
            string weight;
            string type1;
            string type2;
            string desc;

            getline(str,index, '\t');
            getline(str,name,'\t');
            getline(str,weight,'\t');
            getline(str,type1,'\t');
            getline(str,type2,'\t');
            getline(str,desc,'\t');

            int hash = hashFunction(name);
            pokeNode *p = createPokemon(stoi(index),name,stof(weight),type1,type2,desc,table[hash]);
            table[hash] = p; 
        }
    }
    myfile.close(); 
}

void PokeHash::readInUserFile(string userFile)
{
    ifstream myfile;
    myfile.open(userFile);
    if(myfile.is_open())
    {
        string line = "";
        int lineidx = 0;

        while(getline(myfile,line))
        {
            stringstream str(line);
            string index; 
            string name;
            string weight;
            string type1;
            string type2;
            string desc;

            getline(str,index, '\t');
            getline(str,name,'\t');
            getline(str,weight,'\t');
            getline(str,type1,'\t');
            getline(str,type2,'\t');
            getline(str,desc,'\t');

            int hash = hashFunction(name);
            pokeNode *p = createPokemon(stoi(index),name,stof(weight),type1,type2,desc,table[hash]);
            table[hash] = p; 
        }
    }
    myfile.close();
}

void PokeHash::printTypes()
{
    printf("1: Normal     10: Flying\n");
    printf("2: Fire       11: Psychic\n");
    printf("3: Water      12: Bug\n");
    printf("4: Grass      13: Rock\n");
    printf("5: Electric   14: Ghost\n");
    printf("6: Ice        15: Dark\n");
    printf("7: Fighting   16: Dragon\n");
    printf("8: Poison     17: Steel\n");
    printf("9: Ground     18: Fairy\n");
    cout << endl; 
}

bool isNum(string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        if(!isdigit(str[i]))
        {
            return false; 
        }
    }
    return true; 
}

bool isFloat(string str)
{
    for(int i = 0; i < str.size(); i++)
    {
        if(!isdigit(str[i]) && str[i]!= '.')
        {
            return false; 
        }
    }
    return true; 

}


bool PokeHash::insertPokemon(string name, string file)
{
    cin.ignore();
    if(!searchPokemon(name))
    {
        string i; 
        string w; 
        string t1; 
        string t2; 
        string d; 

        cout << "Input " << name << "'s Pokedex number: ";
        getline(cin, i); 
        while(!isNum(i))
        {
            cout << "Please enter a valid number: "; 
            getline(cin,i); 
        }
        cout << endl; 

        cout << "Input " << name << "'s weight in lb: ";
        getline(cin, w); 
        while(!isFloat(w))
        {
            cout << "Please enter a valid weight in lb: "; 
            getline(cin,w); 
        }
        cout << endl; 

        printTypes(); 
        cout << "Please choose a number for " << name << "'s type (1-18): ";
        string typeNum; 
        getline(cin, typeNum);
        cout << endl; 
        
        while(!(isNum(typeNum)) || !(stoi(typeNum)<=18 && stoi(typeNum)>=1))
        {
            cout << "Invalid input, please enter a number between 1-18: ";  
            getline(cin, typeNum);
        }
        switch(stoi(typeNum))
        {
            case 1: 
            {
                t1 = "Normal";
                break;
            }
            case 2: 
            {
                t1 = "Fire";
                break;
            }
            case 3: 
            {
                t1 = "Water";
                break;
            }
            case 4: 
            {
                t1 = "Grass";
                break; 
            }
            case 5: 
            {
                t1 = "Electric";
                break;
            }
            case 6: 
            {
                t1 = "Ice";
                break;
            }
            case 7: 
            {
                t1 = "Fighting";
                break;
            }
            case 8: 
            {
                t1 = "Poison";
                break;
            }
            case 9: 
            {
                t1 = "Ground";
                break;
            }
            case 10: 
            {
                t1 = "Flying";
                break;
            }
            case 11: 
            {
                t1 = "Psychic";
                break;
            }
            case 12: 
            {
                t1 = "Bug";
                break;
            }
            case 13: 
            {
                t1 = "Rock"; 
                break;
            }
            case 14: 
            {
                t1 = "Ghost";
                break;
            }
            case 15: 
            {
                t1 = "Dark";
                break;
            }
            case 16: 
            {
                t1 = "Dragon";
                break;
            }
            case 17: 
            {
                t1 = "Steel";
                break;
            }
            default: 
            {
                t1 = "Fairy";
                break; 
            }
        }
        cout << "You picked: " << t1 << endl << endl;

        string ans; 
        cout << "Does "<< name << " have a second type? (Y or N): "; 
        getline(cin, ans); 
        cout << endl; 
        while(ans!= "Y" && ans != "N" && ans != "y" && ans != "n" )
        {
            cout << "Please enter Y or N: "; 
            getline(cin, ans); 
        }
        if (ans == "Y" || ans == "y")
        {
            printTypes(); 
            cout << "Please choose a number for " << name << "'s second type (1-18) or enter X to change your mind: " << endl;
            string typeNum2; 
            getline(cin, typeNum2);

            while((!(isNum(typeNum2)) || !(stoi(typeNum2)<=18 && stoi(typeNum2)>=1)) && typeNum2 != "X" && typeNum2 != "x")
            {
                cout << "Invalid input, please enter a number between 1-18 or enter X to change your mind: ";  
                getline(cin, typeNum2);
            }

            while (typeNum2 == typeNum)
            {
                cout << "You already set the first type as " << t1 << "." << endl; 
                cout << "Please enter a different number between 1-18 or enter X to change your mind: "; 
                getline(cin, typeNum2);
                while((!(isNum(typeNum2)) || !(stoi(typeNum2)<=18 && stoi(typeNum2)>=1)) && typeNum2 != "X" && typeNum2 != "x")
                {
                    cout << "Invalid input, please enter a number between 1-18 or enter X to change your mind: ";  
                    getline(cin, typeNum2);
                } 

            }
            if(typeNum2 == "x" || typeNum2 == "X")
            {
                t2 = "NULL"; 

            }

            else
            {  
                switch(stoi(typeNum2))
                {
                    case 1: 
                    {
                        t2 = "Normal";
                        break;
                    }
                    case 2: 
                    {
                        t2 = "Fire";
                        break;
                    }
                    case 3: 
                    {
                        t2 = "Water";
                        break;
                    }
                    case 4: 
                    {

                        t2 = "Grass";
                        break; 
                    }
                    case 5: 
                    {
                        t2 = "Electric";
                        break;
                    }
                    case 6: 
                    {
                        t2 = "Ice";
                        break;
                    }
                    case 7: 
                    {
                        t2 = "Fighting";
                        break;
                    }
                    case 8: 
                    {
                        t2 = "Poison";
                        break;
                    }
                    case 9: 
                    {
                        t2 = "Ground";
                        break;
                    }
                    case 10: 
                    {
                        t2 = "Flying";
                        break;
                    }
                    case 11: 
                    {
                        t2 = "Psychic";
                        break;
                    }
                    case 12: 
                    {
                        t2 = "Bug";
                        break;
                    }
                    case 13: 
                    {
                        t2 = "Rock";
                        break;
                    }
                    case 14: 
                    {
                        t2 = "Ghost";
                        break;
                    }
                    case 15: 
                    {
                        t2 = "Dark";
                        break;
                    }
                    case 16: 
                    {
                        t2 = "Dragon";
                        break;
                    }
                    case 17: 
                    {
                        t2 = "Steel";
                        break;
                    }
                    default: 
                    {
                        t2 = "Fairy";
                        break; 
                    }

                }
                cout << "You picked: " << t2 << endl << endl;
            }
        }
        else
        {
            t2 = "NULL";
        }
 
        cout << "Please enter a brief description for " << name << ": " << endl; 
        getline(cin, d); 

        cout << endl;
        cout << "--Your new Pokemon--" << endl;
        cout << "Name: " << name << endl;
        cout << "Pokedex number: " << i << endl;
        cout << "Weight: " << w << endl;
        cout << "Type: " << t1 << endl;
        if(t2 != "NULL")
        {
            cout << "Second type: " << t2 << endl;
        }
        cout << "Description: \n" << d << endl << endl;

        cout << "Are you sure you want to create this Pokemon? (Y or N): ";
        string ans2; 
        getline(cin, ans2); 
        cout << endl; 
        while(ans2!= "Y" && ans2 != "N" && ans2 != "y" && ans2 != "n" )
        {
            cout << "Please enter Y or N: "; 
            getline(cin, ans2); 
        }
        if(ans2 == "Y" || ans2 == "y")
        {
            int idx = hashFunction(name); 
            table[idx] = createPokemon(stoi(i), name, stof(w), t1, t2, d, table[idx]); 
            cout << name << " has been added!" << endl;
            cout << endl; 

            ofstream userFile; 
            userFile.open(file, ios::out | ios::app);
            userFile << i << "\t" << name << "\t" << w << "\t" << t1 << "\t" << t2 << "\t" << d << endl;
            userFile.close(); 

            return true; 
        }
        else
        {
            cout << name << " will not be added." << endl;
            cout << endl;
            return false;
        }
    }

    else
    {
        string original = table[hashFunction(name)]->name;
        cout << original << " already exists. " << endl; 
        cout << endl;
        return false; 
    }
 
    
}

pokeNode* PokeHash::createPokemon(int i, string n, float w, string t1, string t2, string d, pokeNode* next)
{

    pokeNode * newNode = new pokeNode(i, n, w, t1, t2,d); 
    sort(newNode);
    newNode->next = next; 

    return newNode; 
}

void PokeHash::printPokemonFromVector(int index, vector<pokeNode*> type)
{
    string p = "---" + type[index]->name + "---";
    for(int i = 0; i < p.size(); i++)
    {
        cout << p[i] << flush;
        usleep(100000);
    }
    cout << endl;
    usleep(500000);
    // cout << "---" << type[index]->name << "---" << endl;
    cout << "Pokedex Num: " << type[index]->index << endl; 
    usleep(500000);
    cout << "Weight: " << type[index]->weight << " lbs. " << endl;
    usleep(500000);
    if(type[index]->type2 == "NULL")
    {
        cout << "Type: " << type[index]->type1 << endl;
    }
    else 
    {
        cout << "Types: " << type[index]->type1 << ", " << type[index]->type2 << endl;
    }
    usleep(500000);
    string s = type[index]->desc;
    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << flush;
        usleep(50000);
    }
    cout << endl << endl;
    // cout << type[index]->desc << endl;
    // cout << endl;

}

void PokeHash::printPokemonFromHash(string name)
{
    pokeNode *temp = searchPokemon(name); 
    if(temp == NULL)
    {
        cout << "Pokemon not found" << endl; 
        return; 
    }

    else
    {
        string p = "---" + temp->name + "---";
        for(int i = 0 ; i < p.size(); i++)
        {
            cout << p[i] << flush;
            usleep(100000);
        }
        cout << endl;
        usleep(500000);
        // cout << "---" << temp->name << "---" << endl;
        cout << "Pokedex Num: " << temp->index << endl; 
        usleep(500000);
        cout << "Weight: " << temp->weight << " lbs. " << endl;
        usleep(500000);
        if(temp->type2 == "NULL")
        {
            cout << "Type: " << temp->type1 << endl;
        }
        else 
        {
            cout << "Types: " << temp->type1 << ", " << temp->type2 << endl;
        }
        usleep(500000);
        string d = temp->desc;
        for(int i = 0; i < d.size(); i++)
        {
            cout << d[i] << flush;
            usleep(50000);
        }
        cout << endl;
        // cout << "Description: " << endl;
        // cout << temp->desc << endl;
        
    }
    
}
void PokeHash::printPokemonByTypes()
{
    cin.ignore();
    printTypes();
    string type;
    cout << "Please choose a Pokemon type to view (1-18): ";
    getline(cin, type); 
    // if you put a string and then an invalid number it works fine
    // however, terminates when invalid number then string
    while(!(isNum(type)) || !(stoi(type) <= 18 && stoi(type)>=1))
    {
        cout << "Invalid input, please enter a number between 1-18: "; 
        getline(cin,type); 
    }
    cout << endl;
    if(!printByType(stoi(type)))
    {
        return;
    }
    string idx; 
    cout << "Please enter the number of the Pokemon you would like to view: ";
    getline(cin, idx); 
    while(!isNum(idx))
    {
        cout << "Invalid input, please enter a number: ";
        getline(cin, idx);
    }
    switch(stoi(type))
    {
        case 1: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=normal.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << normal.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, normal);
            break;
        }
        case 2: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=fire.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << fire.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, fire);
            break;
        }
        case 3: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=water.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << water.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, water);
            break;
        }
        case 4: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=grass.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << grass.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, grass);
            break; 
        }
        case 5: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=electric.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << electric.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, electric);
            break;
        }
        case 6: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=ice.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << ice.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, ice);
            break;
        }
        case 7: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=fighting.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << fighting.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, fighting);
            break;
        }
        case 8: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=poison.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << poison.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, poison);
            break;
        }
        case 9: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=ground.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << ground.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, ground);
            break;
        }
        case 10: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=flying.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << flying.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, flying);
            break;
        }
        case 11: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=psychic.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << psychic.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, psychic);
            break;
        }
        case 12: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=bug.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << bug.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, bug);
            break;
        }
        case 13: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=rock.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << rock.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, rock);
            break;
        }
        case 14: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=ghost.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << ghost.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, ghost);
            break;
        }
        case 15: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=dark.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << dark.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, dark);
            break;
        }
        case 16: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=dragon.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << dragon.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, dragon);
            break;
        }
        case 17: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=steel.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << steel.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, steel);
            break;
        }
        default: 
        {
            while(!(isNum(idx) && stoi(idx)>=1 && stoi(idx)<=fairy.size()))
            {
                cout << "Invalid input, please enter a number between 1 and " << fairy.size() << ": ";
                getline(cin,idx);
            }
            cout << endl;

            int index = stoi(idx) - 1;
            printPokemonFromVector(index, fairy);
            break; 
        }

    }
    
}

