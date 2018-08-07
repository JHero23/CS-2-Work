//
// Created by tpc345 on 8/3/2018.
//
#include "autocompleter.h"
#include <iostream>
using namespace std;

// Creates a new, empty autocompleter.
Autocompleter::Autocompleter() {
    count = 0;
    capacity = 1;
    A = new string[capacity];
    for (int i = 0; i < capacity; i++) {
        A[i] = "";
    }
}

// Adds x to the list of potential suggestions in the Autocompleter.
// If the word is already in the Autocompleter, does nothing.
//
// Must run in O(n) time.
void Autocompleter::insert(string x) {
    if (count == capacity) {
        capacity *= 2;
        string *new_A = new string[capacity];

        for (int i = 0; i < capacity; i++) {
            if (i < count) {
                new_A[i] = A[i];
            } else {
                new_A[i] = "";
            }
        }

        delete A;
        A = new_A;
    }

    int index = index_of(x, A, capacity);
    if (A[index] == x) {
        return;
    }

    A[count] = x;
    count++;

    // Reorder the array to restore sortedness (via swapping the new element towards the front of the array as far as necessary, as done in insertion sort).
    for (int i = 0; i < capacity; ++i)
    {
        int j = i;
        while (j > 0 && A[j] < A[j-1])
        {
            swap(A[j], A[j-1]);
            --j;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << A[i] << endl;
    }
}

// Returns the number of strings in the Autocompleter.
int Autocompleter::size() {
    return count;
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

// Optional helper method.
//
// Assumes A is sorted.
// If x is in A, returns the index of A containing x.
// Otherwise, returns the index of A where x would be
// after calling add(x).
//
// Should run in O(log(n)) time (use binary search).
int Autocompleter::index_of(string x, string *A, int n) {
    int l, m, r;

    l = 0;
    r = n - 1;

    while (l <= r)
    {
        m = (l + r) / 2;
        // Case 1: A[m] == x
        if (A[m] == x)
            return m;
        // Case 2: A[m] < x
        if (A[m] < x)
            l = m + 1;
            // Case 3: A[m] > x
        else if (A[m] > x)
            r = m - 1;
    }
}