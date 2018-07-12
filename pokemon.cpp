#include <iostream>
#include "pokemon.h"

using namespace std;

// Initializes a single-type Pokemon using the information provided
Pokemon::Pokemon(string name, int ndex, Pokemon::Type type1) {
    _name = name;
    _ndex = ndex;
    types[0] = type1;
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
Type Pokemon::type1() {
    return type[0];
}

// Returns whether the Pokemon has multiple types
bool Pokemon::is_multitype() {
    if (type2() == NULL) {
        return true;
    }

    return false;
}

// If the Pokemon has two types, returns the second type of the Pokemon.
// Otherwise returns the Pokemon's only type.
Type Pokemon::type2() {
    return type[1];
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
    return 0.0;
}
