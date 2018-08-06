//
// Created by tpc345 on 8/3/2018.
//
#include "autocompleter.h"

using namespace std;

// Creates a new, empty autocompleter.
Autocompleter::Autocompleter() {
    count = 0;
    capacity = 1;
    for (int i = 0; i < capacity; i++) {
        A[i] = nullptr;
    }
}

// Adds x to the list of potential suggestions in the Autocompleter.
// If the word is already in the Autocompleter, does nothing.
//
// Must run in O(n) time.
void Autocompleter::insert(string x) {

}

// Returns the number of strings in the Autocompleter.
int Autocompleter::size() {

}

// Returns the number of strings that are completions of
// the parameter string x.
//
// Must run in O(log(n)) time.
int Autocompleter::completion_count(string x) {

}

// Takes a string (named x) and string array of length 5 (named suggestions)
// Sets the first five elements of suggestions equal
// to the first five (in lexicographic order) strings
// in the Autocompleter that start with x.
//
// If there are less than five such strings, the remaining
// entries of the suggestions array are set to "" (the empty string)
//
// Must run in O(log(n)) time.
void Autocompleter::completions(string x, string* suggestions) {

}
