#include <iostream> 
#include <vector>
using namespace std; 

#ifndef POKEHASH_HPP
#define POKEHASH_HPP
struct pokeNode
{
    string name; 
    float weight; 
    string ability1; 
    string ability2; 
    string desc; 
    pokeNode *next; 

    pokeNode(){}//default constructor

    LLMovieNode(string n, float w, string a1, string a2, string d) : name(n), weight(w), 
    ability1(a1), ability2(a2), desc(d){} //parametized constructor 

}; 

class PokeHash
{
    public: 
        PokeHash(); //constructor
        bool insertPokemon(string name); //when true, this will output to user pokemon file
        void printByType(string type); 
        pokeNode *searchPokemon(string name);
        void readInFiles(); //reads in original pokemon file and user's pokemon file
        unsigned int hashFunction(string key); 

    private: 
        int tableSize = 1049;//number of pokemon that currently exist * 1.3
        pokeNode* table[tableSize]; 
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

