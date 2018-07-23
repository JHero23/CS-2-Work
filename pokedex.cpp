//
// Created by joelg on 7/22/2018.
//
#include <iostream>
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
    string line;

    while (!inFile.eof()) {
        getline(inFile, line);
        cout << line << endl;
    }
}

// Writes the Pokedex to the file.
void Pokedex::save(string filename) {
    return;
}

// Adds a pokemon to the pokedex.
void Pokedex::add(Pokemon* p) {
    return;
}

// Removes a pokemon from the pokedex.
void Pokedex::remove(Pokemon* p) {
    return;
}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: loop through all of A, searching for a Pokemon with
// the given name. Return the first one found.
Pokemon* Pokedex::lookup_by_name(string name) {
    return nullptr;
}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: look in A[ndex].
Pokemon* Pokedex::lookup_by_Ndex(int ndex) {
    return nullptr;
}

// Returns the number of pokemon in the pokedex.
int Pokedex::size() {
    return 0;
}

// Returns a string corresponding to the type. Examples:
// 1. type_to_string(Pokemon::Poison) returns "Poison".
// 2. type_to_string(Pokemon::Normal) returns "Normal".
string type_to_string(Pokemon::Type t) {
    return "";
}

// Returns the type corresponding to a string. Examples:
// 1. string_to_type("Poison") returns Pokemon::Poison.
// 2. string_to_type("Normal") returns Pokemon::Normal.
// 3. Allowed to return anything if given string doesn't
//    correspond to a Pokemon type.
Pokemon::Type string_to_type(string s) {
    return Pokemon::Poison;
}