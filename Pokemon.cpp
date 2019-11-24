#include "Pokemon.hpp"
#include <iostream> 
#include <fstream> 
#include <vector> 
#include <math.h> 
unsigned int PokeHash::hashFunction(string key)
{
    float hash = 0; 
    float A = 13/float(32);
    for(int i = 0; i < key.size(); i++)
    {
        hash = hash + int(key[i]);
    }
    hash = A*hash; 
    hash = hash - (long)hash; 
    hash = hash * 1049; 
    hash = round(hash);
    return hash; 
}
void PokeHash::readInPokemonFile()
{
    ifstream myfile;
    myfile.open("Pokemon.cpp");
    if(myfile.is_open())
    {
        
    }
}