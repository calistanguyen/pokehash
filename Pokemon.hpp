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

    pokeNode(int i, string n, float w, string t1, string t2, string d) : index(i), name(n), weight(w), 
    type1(t1), type2(t2), desc(d){} //parametized constructor 

}; 

class PokeHash
{
    public: 
        PokeHash(); //constructor
        void printTypes(); 
        bool insertPokemon(string name, string userFile); //when true, this will output to user pokemon file
        bool printByType(int type); // prints the type and all pokemon under that type
        void printPokemonByTypes(); //prints specific pokemon under one type 
        pokeNode *searchPokemon(string name);//searches for pokemon by using the hash table
        void sort(pokeNode *p); //sorts pokemon into their respective type vectors
        void readInPokemonFile(); //reads in original pokemon file
        void readInUserFile(string userFile); //reads in users file
        unsigned int hashFunction(string key); //creates the index for each pokemon
        void printPokemonFromVector(int index, vector<pokeNode*>type); //prints from vector
        void printPokemonFromHash(string name); //prints pokemon by looking at a hash index
        //void access();

    private: 
        int tableSize = 1049;//number of pokemon that currently exist * 1.3
        pokeNode* table[1049]; //hashtable
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

        pokeNode* createPokemon(int i, string n, float w, string t1, string t2, string d, pokeNode* next);//creates the pokemon node
    
};
#endif
