/*
Name: Joel Gutierrez
Date: 7/12/2018
Program: hwPKM1
Description: This is an introduction to CS 2, reviewing classes and object-orientation
from CS 1.

NOTICE: This 'pokemon.cpp' is my original work, do not copy.
CREDITS: Andrew Winslow for supplying 'pokemon.h' and 'main.cpp' as a homework exercises.
*/
#include <iostream>
#include "pokemon.h"

using namespace std;

// Initializes a Pokemon from a summary string
//
// Hint: check out the stoi function in <string>
Pokemon::Pokemon(string summary) {
    stringstream ss(summary);
    string word;
    string tokens[4] = {};
    int i = 0;

    while (getline(ss, tokens[i], ',')) {
        i++;
    }

    while (tokens[i].empty()) {
        cout << tokens[i] << " ";
        i++;
    }

    cout << endl;
//    _name = tokens[0];
//    _ndex = stoi(tokens[1].erase(0,1));
//

}

// Returns the summary string of the Pokemon
//
// Hint: check out the ostringstream class in <sstream>
string Pokemon::summary() {

}


// Initializes a single-type Pokemon using the information provided
Pokemon::Pokemon(string name, int ndex, Pokemon::Type type1) {
    _name = name;
    _ndex = ndex;
    types[0] = types[1] = type1;
}

// Initializes a multi-type Pokemon using the information provided
Pokemon::Pokemon(string name, int ndex, Pokemon::Type type1, Pokemon::Type type2) {
    _name = name;
    _ndex = ndex;
    types[0] = type1;
    types[1] = type2;
}

// Returns the name of the pokemon
string Pokemon::name() {
    return _name;
}

// Returns the Ndex (national index) of the Pokemon
int Pokemon::Ndex() {
    return _ndex;
}

// Returns the first (and possibly only) type of the Pokemon
Pokemon::Type Pokemon :: type1() {
    return types[0];
}

// Returns whether the Pokemon has multiple types
bool Pokemon::is_multitype() {
    return (type1() == type2()) ? (false) : (true);
}

// If the Pokemon has two types, returns the second type of the Pokemon.
// Otherwise returns the Pokemon's only type.
Pokemon::Type Pokemon :: type2() {
    return types[1];
}

// The damage multiplier of a move against a Pokemon
// is the product of the multiplier for each of the Pokemon's types.
// Reference: http://bulbapedia.bulbagarden.net/wiki/Type/Type_chart#Generation_I

// Example 1: a move with a 2.0 multiplier against Fighting and Flying Pokemon
// has a 4.0 multiplier against a Pokemon that is both Fighting and Flying.

// Example 2: a move with a 0.5 multiplier against Flying and Poison Pokemon
// has a 0.5 multiplier against a Pokemon that is both Flying and Poison.

// Normal moves: 1.0 against all Pokemon types.
// Fighting moves: 2.0 against Normal, 0.5 against Flying and Poison, 1.0 against Fighting.
// Flying moves: 1.0 against all types except Fighting, 2.0 against Fighting.
// Poison moves: 1.0 against all types except Poison, 0.5 against Poison.

// Returns the damage multiplier against this Pokemon
// for a move of the parameter type.
float Pokemon::damage_multiplier(Pokemon::Type attack_type) {
    // dmg = type1_d * type2_d if two types
    // dmg = type1_d if one type
    float damage_res = 0.0;

    // If it has only one type.
    if (!is_multitype()) {
        // If Normal
        if (type1() == Normal) {
            if (attack_type == Normal)
                damage_res = 1;
            else if (attack_type == Fighting)
                damage_res = 2;
            else if (attack_type == Flying)
                damage_res = 1;
            else if (attack_type == Poison)
                damage_res = 1;
        }
        // If Fighting
        else if (type1() == Fighting) {
            if (attack_type == Normal)
                damage_res = 1;
            else if (attack_type == Fighting)
                damage_res = 1;
            else if (attack_type == Flying)
                damage_res = 2;
            else if (attack_type == Poison)
                damage_res = 1;
        }
        // If Flying
        else if (type1() == Flying) {
            if (attack_type == Normal)
                damage_res = 1;
            else if (attack_type == Fighting)
                damage_res = 0.5f;
            else if (attack_type == Flying)
                damage_res = 1;
            else if (attack_type == Poison)
                damage_res = 1;
        }
        // If Poison
        else if (type1() == Poison) {
            if (attack_type == Normal)
                damage_res = 1;
            else if (attack_type == Fighting)
                damage_res = 0.5f;
            else if (attack_type == Flying)
                damage_res = 1;
            else if (attack_type == Poison)
                damage_res = 0.5f;
        }
    }
    // If it has multiple type.
    else {
        // If Normal and Flying
        if (type1() == Normal && type2() == Flying) {
            if (attack_type == Normal)
                damage_res = 1 * 1;
            else if (attack_type == Flying)
                damage_res = 1 * 1;
            else if (attack_type == Fighting)
                damage_res = 2 * 0.5f;
            else if (attack_type == Poison)
                damage_res = 1 * 1;
        }
        // If Poison and Flying
        else if (type1() == Poison && type2() == Flying) {
            if (attack_type == Normal)
                damage_res = 1 * 1;
            else if (attack_type == Flying)
                damage_res = 1 * 1;
            else if (attack_type == Fighting)
                damage_res = 0.5f * 0.5f;
            else if (attack_type == Poison)
                damage_res = 1 * 0.5f;
        }
        // If Poison and Fighting
        else if (type1() == Poison && type2() == Fighting) {
            if (attack_type == Normal)
                damage_res = 1 * 1;
            else if (attack_type == Flying)
                damage_res = 2 * 1;
            else if (attack_type == Fighting)
                damage_res = 1 * 0.5f;
            else if (attack_type == Poison)
                damage_res = 1 * 0.5f;
        }
        // If Fighting and Flying
        else if (type1() == Fighting && type2() == Flying) {
            if (attack_type == Normal)
                damage_res = 1 * 1;
            else if (attack_type == Flying)
                damage_res = 2 * 1;
            else if (attack_type == Fighting)
                damage_res = 1 * 0.5f;
            else if (attack_type == Poison)
                damage_res = 1 * 1;
        }
        // If Flying and Normal
        else if (type1() == Flying && type2() == Normal) {
            if (attack_type == Normal)
                damage_res = 1 * 1;
            else if (attack_type == Flying)
                damage_res = 1 * 1;
            else if (attack_type == Fighting)
                damage_res = 2 * 0.5f;
            else if (attack_type == Poison)
                damage_res = 1 * 1;
        }
    }

    return damage_res;
}
