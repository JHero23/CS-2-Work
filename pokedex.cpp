//
// Created by joelg on 7/22/2018.
//
#include<iostream>
#include <fstream>
#include "pokedex.h"

// A file containing a Pokedex should contain a line
// for each Pokemon in the Pokedex. This line
// should be the summary string of the Pokemon.
// See pokemon.txt for an example.

// Constructs an empty pokedex.
Pokedex::Pokedex() {
    for (int i = 0; i < sizeof(A); i++) {
        A[i] = nullptr;
    }
}

// Constructs a Pokedex with the Pokemon found in
// the specified file.
Pokedex::Pokedex(string filename) {
    ifstream inFile(filename);
    int _ndex;       // Stores the Pokemon's Ndex
    string _name;    // Stores the Pokemon's name
    Type types[2];   // Stores the Pokemon's types (1 or 2 of them)
    int type_count;

    while (!inFile.eof()) {
        inFile >> _name;
        inFile >> _ndex;
        inFile >>
    }
}

// Writes the Pokedex to the file.
void Pokedex::save(string filename) {

}

// Adds a pokemon to the pokedex.
void Pokedex::add(Pokemon* p) {

}

// Removes a pokemon from the pokedex.
void Pokedex::remove(Pokemon* p) {

}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: loop through all of A, searching for a Pokemon with
// the given name. Return the first one found.
Pokemon* Pokedex::lookup_by_name(string name) {

}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: look in A[ndex].
Pokemon* Pokedex::lookup_by_Ndex(int ndex) {

}

// Returns the number of pokemon in the pokedex.
int Pokedex::size() {

}
