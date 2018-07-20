//
// Created by joelg on 7/19/2018.
//
#include <iostream>
#include <string>
#include "canvas.h"

using namespace std;

// Allocates a canvas of the given width and height 5 that
// consists entirely of ' ' (space) chars.
Canvas::Canvas(int width) {
    _width = width;

    C = new char*[5];

    for (int i = 0; i < 5; i++) {
        C[i] = new char[_width];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < _width; j++) {
            C[i][j] = ' ';
        }
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
    _width = 5;

    C = new char*[5];

    for (int i = 0; i < 5; i++) {
        C[i] = new char[_width];
    }

    for (int i = 0; i < _width; i++) {
        for (int j = 0; j < _width; j++) {
            if (x == 'A') {
                if ((i == 0 && j == 0) || (i == 0 && j == 4)) {
                    C[i][j] = ' ';
                } else if ((i == 1 || i == 3 || i == 4) && (j == 1 || j == 2 || j == 3)) {
                    C[i][j] = ' ';
                } else {
                    C[i][j] = '#';
                }
            } else if (x == 'B') {
                if ((i == 1 || i == 3) && (j == 1 || j == 2 || j == 3)) {
                    C[i][j] = ' ';
                } else if ((i == 0 || i == 2 || i == 4) && (j == 4)) {
                    C[i][j] = ' ';
                } else {
                    C[i][j] = '#';
                }
            } else if (x == 'C') {
                if ((i == 0 || i == 4) && (j == 0)) {
                    C[i][j] = ' ';
                } else if ((i == 1 || i == 2 || i == 3) && (j == 1 || j == 2 || j == 3 || j == 4)) {
                    C[i][j] = ' ';
                } else {
                    C[i][j] = '#';
                }
            } else if (x == 'D') {
                if ((i == 0 || i == 4) && (j == 4)) {
                    C[i][j] = ' ';
                } else if ((i == 1 || i == 2 || i == 3) && (j == 1 || j == 2 || j == 3)) {
                    C[i][j] = ' ';
                } else {
                    C[i][j] = '#';
                }
            } else {
                C[i][j] = ' ';
            }
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
   Canvas nC(s[0]);

   for (int i = 1; i < s.length(); i++) {
       nC.add(s[i]);
   }

   C = new char*[5];

   for (int r = 0; r < 5; r++) {
       C[r] = new char[nC._width + 1];
       for (int c = 0; c < nC._width; c++) {
           C[r][c] = nC.C[r][c];
       }
   }

    _width = nC._width;
}

// Returns the width of the canvas.
int Canvas::width() {
    return _width;
}

// Returns the entire canvas as a single string, consisting of each row
// of the canvas, followed by the newline character ('\n').
string Canvas::to_string() {
    string s = "";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < _width; j++) {
            s += C[i][j];
        }
        s += '\n';
    }

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
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < _width; j++) {
            if (C[i][j] == old_char) {
                C[i][j] = new_char;
            }
        }
    }
}

// Adds a character to the Canvas's sequence of characters.
void Canvas::add(char x) {
    char** nC = new char*[5];

    for (int r = 0; r < 5; r++) {
        nC[r] = new char[_width + 7];
        for (int c = 0; c < _width; c++) {
            nC[r][c] = C[r][c];
        }

        nC[r][_width] = ' ';
        nC[r][_width + 1] = ' ';

        for (int c = 0; c < 5; c++) {
            if (x == 'A') {
                if ((r == 0 && c == 0) || (r == 0 && c == 4)) {
                    nC[r][c + _width + 2] = ' ';
                } else if ((r == 1 || r == 3 || r == 4) && (c == 1 || c == 2 || c == 3)) {
                    nC[r][c + _width + 2] = ' ';
                } else {
                    nC[r][c + _width + 2] = '#';
                }
            } else if (x == 'B') {
                if ((r == 1 || r == 3) && (c == 1 || c == 2 || c == 3)) {
                    nC[r][c + _width + 2] = ' ';
                } else if ((r == 0 || r == 2 || r == 4) && (c == 4)) {
                    nC[r][c + _width + 2] = ' ';
                } else {
                    nC[r][c + _width + 2] = '#';
                }
            } else if (x == 'C') {
                if ((r == 0 || r == 4) && (c == 0)) {
                    nC[r][c + _width + 2] = ' ';
                } else if ((r == 1 || r == 2 || r == 3) && (c == 1 || c == 2 || c == 3 || c == 4)) {
                    nC[r][c + _width + 2] = ' ';
                } else {
                    nC[r][c + _width + 2] = '#';
                }
            } else if (x == 'D') {
                if ((r == 0 || r == 4) && (c == 4)) {
                    nC[r][c + _width + 2] = ' ';
                } else if ((r == 1 || r == 2 || r == 3) && (c == 1 || c == 2 || c == 3)) {
                    nC[r][c + _width + 2] = ' ';
                } else {
                    nC[r][c + _width + 2]= '#';
                }
            } else {
                nC[r][c + _width + 2] = ' ';
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        delete C[i];
    }
    delete C;

    C = nC;

    _width += 7;
}

// Destructor. Deallocates all of the memory allocated by the canvas.
Canvas::~Canvas() {
    for (int i = 0; i < 5; i++) {
        delete [] C[i];
    }
    delete [] C;
}