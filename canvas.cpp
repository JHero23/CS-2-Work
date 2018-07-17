//
// Created by joelg on 7/16/2018.
//
#include <iostream>
#include "canvas.h"

using namespace std;

// Allocates a canvas of the given width and height 5 that
// consists entirely of ' ' (space) chars.
Canvas::Canvas(int width) {
    _width = width;
    char temp = ' ';

    C = new char*[_width];

    for (int i = 0; i < _width; i++) {
        C[i] = new char[_width];
    }

    for (int i = 0; i < _width; i++) {
       C[i] = &temp;
    }
}

// Allocates a canvas with width 5 and height 5 that looks like:
//
//  ###       ####        ####     ####
// #   #      #   #      #         #   #
// #####  or  ####   or  #      or #   #
// #   #      #   #      #         #   #
// #   #      ####        ####     ####
//
// depending upon which character ('A', 'B', 'C', or 'D') is
// given as a parameter. If some other character is given,
// allocates a canvas of ' ' chars with width 5 and height 5.
Canvas::Canvas(char x) {
    char temp = ' ';

    C = new char*[_width];

    for (int i = 0; i < _width; i++) {
        C[i] = new char[_width];
    }

    for (int i = 0; i < _width; i++) {
        for (int j = 0; j < _width; j++) {
            C[i][j] = '#';
        }
    }
}

// Allocates a canvas containing the sequence of characters
// in the string with 2 columns of space between each pair
// of adjacent characters. For instance, Canvas("BADCAB")
// should yield:
//
// ####    ###   ####    ####   ###   ####
// #   #  #   #  #   #  #      #   #  #   #
// ####   #####  #   #  #      #####  ####
// #   #  #   #  #   #  #      #   #  #   #
// ####   #   #  ####    ####  #   #  ####
//
// Any characters in s not from {'A', 'B', 'C', 'D'} should be
// replaced with empty 5x5 space, just like previous constructor.
Canvas::Canvas(string s) {

}

// Returns the width of the canvas.
int Canvas::width() {
    return _width;
}

// Returns the entire canvas as a single string, consisting of each row
// of the canvas, followed by the newline character ('\n').
string Canvas::to_string() {
    string s;

    for (int i = 0; i < width(); i++) {
        s += C[i];
    }

    s += '\n';

    return s;
}

// Replaces every instance in the canvas of old_char with new_char.
// For instance, if old_char is '#' and new char is '@', then:
//
//  ###             @@@
// #   #           @   @
// #####  becomes  @@@@@
// #   #           @   @
// #   #           @   @
//
void Canvas::replace(char old_char, char new_char) {
    for (int i = 0; i < _width; i++) {
        for (int j = 0; j < _width; j++) {
            if (C[i][j] == old_char) {
                C[i][j] = new_char;
            }
        }
    }

}

// Adds a character to the Canvas's sequence of characters.
void Canvas::add(char x) {

}

// Destructor. Deallocates all of the memory allocated by the canvas.
Canvas::~Canvas() {
    for (int i = 0; i < width(); i++) {
        delete [] C[i];
    }
    delete [] C;
}
