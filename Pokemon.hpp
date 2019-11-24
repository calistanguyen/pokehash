#include <iostream> 
#include <vector>
using namespace std; 

#ifndef POKEHASH_HPP
#define POKEHASH_HPP
struct pokeNode
{
    int index; // pokemon's index in pokedex
    string name; 
    float weight; 
    string type1; 
    string type2; 
    string desc; 
    pokeNode *next; 

    pokeNode(){}//default constructor

    pokeNode(string n, float w, string t1, string t2, string d) : name(n), weight(w), 
    type1(t1), type2(t2), desc(d){} //parametized constructor 

}; 

class PokeHash
{
    public: 
        PokeHash(); //constructor
        bool insertPokemon(string name); //when true, this will output to user pokemon file
        void printByType(string type); 
        pokeNode *searchPokemon(string name);
        void readInPokemonFile(); //reads in original pokemon file
        void readInUserFile(); //reads in users file
        unsigned int hashFunction(string key); 

    private: 
        const int tableSize = 1049;//number of pokemon that currently exist * 1.3
        pokeNode* *table[1049]; 
        vector<pokeNode*> normal;
        vector<pokeNode*> fire;
        vector<pokeNode*> water;
        vector<pokeNode*> grass;
        vector<pokeNode*> electric;
        vector<pokeNode*> ice;
        vector<pokeNode*> fighting;
        vector<pokeNode*> poison;
        vector<pokeNode*> ground;
        vector<pokeNode*> flying;
        vector<pokeNode*> psychic;
        vector<pokeNode*> bug;
        vector<pokeNode*> rock;
        vector<pokeNode*> ghost;
        vector<pokeNode*> dark;
        vector<pokeNode*> dragon;
        vector<pokeNode*> steel;
        vector<pokeNode*> fairy;
    
        pokeNode *createNode(string name, pokeNode* next); 

        

};
#endif
