//
// Created by joelg on 7/22/2018.
//
#include <iostream>
#include "pokedex.h"

// A file containing a Pokedex should contain a line
// for each Pokemon in the Pokedex. This line
// should be the summary string of the Pokemon.
// See pokemon.txt for an example.

// Initializes a Pokemon from a summary string
//
// Hint: check out the stoi function in <string>
Pokemon::Pokemon(string summary) {
    stringstream ss(summary);
    string name, ndex, type1, type2;

    ss >> name;
    ss >> ndex;
    ss >> type1;
    ss >> type2;

    _name = string(name, 0, name.find(','));
    _ndex = stoi(string(ndex, 1, ndex.find(',')), nullptr, 10);

    if (type2.empty()) {
        types[0] = types[1] = string_to_type(string(type1, 0, type1.find(',')));
    } else {
        types[0] = string_to_type(string(type1, 0, type1.find(',')));
        types[1] = string_to_type(string(type2, 0, type2.find(',')));
    }
}

// Returns the summary string of the Pokemon
//
// Hint: check out the ostringstream class in <sstream>
string Pokemon::summary() {
    ostringstream oss;

    oss << name() << ", #";
    oss.fill('0');
    oss.width(3);
    oss << Ndex() << ", " << type_to_string(types[0]) << ",";

    if (types[0] != types[1]) {
         oss << " " << type_to_string(types[1]) << ",";
    }

    return oss.str();
}

// Constructs an empty pokedex.
Pokedex::Pokedex() {
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        A[i] = nullptr;
    }
}

// Constructs a Pokedex with the Pokemon found in
// the specified file.
Pokedex::Pokedex(string filename) {
    ifstream inFile;
    string line;

    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        A[i] = nullptr;
    }

    inFile.open(filename);

    if (!inFile) {
        cerr << "File could not be found!" << endl;
        return;
    }

    while (getline(inFile, line)) {
        Pokemon* p = new Pokemon(line);
        add(p);
    }

    inFile.close();
}

// Writes the Pokedex to the file.
void Pokedex::save(string filename) {
    ofstream outFile(filename, ofstream::out);

    for (int i = 1; i < sizeof(A)/sizeof(A[0]); i++) {
        if (A[i] == nullptr) {
            continue;
        } else {
            outFile << A[i]->summary() << endl;
        }
    }

    outFile.close();

    return;
}

// Adds a pokemon to the pokedex.
void Pokedex::add(Pokemon* p) {
    A[p->Ndex()] = p;
}

// Removes a pokemon from the pokedex.
void Pokedex::remove(Pokemon* p) {
    A[p->Ndex()] = nullptr;
}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: loop through all of A, searching for a Pokemon with
// the given name. Return the first one found.
Pokemon* Pokedex::lookup_by_name(string name) {
    for (int i = 1; i < sizeof(A)/sizeof(A[0]); i++) {
        if (A[i] == nullptr) {
            continue;
        } else if (A[i]->name() == name) {
            return A[i];
        }
    }
    return nullptr;
}

// Returns a (pointer to a) pokemon in the pokedex with the given name.
// If none exists, returns nullptr.
//
// Hint: look in A[ndex].
Pokemon* Pokedex::lookup_by_Ndex(int ndex) {
    return A[ndex];
}

// Returns the number of pokemon in the pokedex.
int Pokedex::size() {
    int count = 0;

    for (int i = 1; i < sizeof(A)/sizeof(A[0]); i++) {
        if (A[i] != nullptr) {
            ++count;
        }
    }

    return count;
}

// Returns a string corresponding to the type. Examples:
// 1. type_to_string(Pokemon::Poison) returns "Poison".
// 2. type_to_string(Pokemon::Normal) returns "Normal".
string type_to_string(Pokemon::Type t) {
    string type;
    switch (t) {
        case Pokemon::Normal:
            type = "Normal";
            break;
        case Pokemon::Poison:
            type = "Poison";
            break;
        case Pokemon::Fighting:
            type = "Fighting";
            break;
        case Pokemon::Flying:
            type = "Flying";
            break;
    }
    return type;
}

// Returns the type corresponding to a string. Examples:
// 1. string_to_type("Poison") returns Pokemon::Poison.
// 2. string_to_type("Normal") returns Pokemon::Normal.
// 3. Allowed to return anything if given string doesn't
//    correspond to a Pokemon type.
Pokemon::Type string_to_type(string s) {
    if (s == "Normal") {
        return Pokemon::Normal;
    } else if (s == "Poison") {
        return Pokemon::Poison;
    } else if (s == "Fighting") {
        return Pokemon::Fighting;
    } else if (s == "Flying") {
        return Pokemon::Flying;
    }
}