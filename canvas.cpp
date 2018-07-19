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

    C = new char*[_width];

    for (int i = 0; i < _width; i++) {
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
    _width = 5;

    C = new char*[_width];
    for (int i = 0; i < _width; i++) {
        C[i] = new char[_width];
    }
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
        for (int j = 0; j < width(); j++) {
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
    for (int i = 0; i < _width; i++) {
        for (int j = 0; j < 5; j++) {
            if (C[i][j] == old_char) {
                C[i][j] = new_char;
            }
        }
    }
}

// Adds a character to the Canvas's sequence of characters.
void Canvas::add(char x) {
    char** temp = new char*[5];
    // OLD CANVAS
    cout << "Canvas 1 width is: " << width() << endl;
    cout << "CANVAS 1:" << endl;
    for (int i = 0; i < width(); i++) {
        temp[i] = new char[width()];
    }
    for (int i = 0; i < width(); i++) {
        for (int j = 0; j < width(); j++) {
            temp[i][j] = C[i][j];
        }
    }
    for (int i = 0; i < width(); i++) {
        for (int j = 0; j < width(); j++) {
            cout << temp[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < width(); i++) {
        temp[i] = new char[5];
        for (int j = 0; j < 5; j++) {
            if (x == 'A') {
                if ((i == 0 && j == 0) || (i == 0 && j == 4)) {
                    temp[i][j] = ' ';
                } else if ((i == 1 || i == 3 || i == 4) && (j == 1 || j == 2 || j == 3)) {
                    temp[i][j] = ' ';
                } else {
                    temp[i][j] = '#';
                }
            } else if (x == 'B') {
                if ((i == 1 || i == 3) && (j == 1 || j == 2 || j == 3)) {
                    temp[i][j] = ' ';
                } else if ((i == 0 || i == 2 || i == 4) && (j == 4)) {
                    temp[i][j] = ' ';
                } else {
                    temp[i][j] = '#';
                }
            } else if (x == 'C') {
                if ((i == 0 || i == 4) && (j == 0)) {
                    temp[i][j] = ' ';
                } else if ((i == 1 || i == 2 || i == 3) && (j == 1 || j == 2 || j == 3 || j == 4)) {
                    temp[i][j] = ' ';
                } else {
                    temp[i][j] = '#';
                }
            } else if (x == 'D') {
                if ((i == 0 || i == 4) && (j == 4)) {
                    temp[i][j] = ' ';
                } else if ((i == 1 || i == 2 || i == 3) && (j == 1 || j == 2 || j == 3)) {
                    temp[i][j] = ' ';
                } else {
                    temp[i][j] = '#';
                }
            } else {
                temp[i][j] = ' ';
            }
        }
    }
    // NEW CANVAS
    // Initialize new Canvas
    _width += 7;
    char** nC = new char*[_width];
    // Make a blank new Canvas
    for (int i = 0; i < width(); i++) {
        nC[i] = new char[5];
        for (int j = 0; j < 5; j++) {
            nC[i][j] = ' ';
        }
    }
    // Transfer data from the old Canvas to the new Canvas
    C = nC;
    for (int j = 0; j < width(); j++) {
        if (j == 7) {
            for (int i = 0; i < 5; i++) {
                C[i][j] = temp[i][j];
            }
        }
    }
    for (int i = 0; i < width(); i++) {
        for (int j = 0; j < 5; j++) {
            cout << nC[i][j];
        }
        cout << endl;
    }
    // Delete the new array, to work with the old array
    for (int i = 0; i < width(); i++) {
        delete [] nC[i];
    }
    delete [] nC;
    // Shift to the right side of the array.
//    for (int i = 0; i < )
}

// Destructor. Deallocates all of the memory allocated by the canvas.
Canvas::~Canvas() {
    for (int i = 0; i < width(); i++) {
        delete [] C[i];
    }
    delete [] C;
}
