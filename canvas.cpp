//
// Created by joelg on 7/16/2018.
//
#include <iostream>
#include <cstring>
#include "canvas.h"

using namespace std;

char* a[] = { " ### ", "#   #", "#####", "#   #", "#   #",};
char* b[] = {"#### ", "#   #", "#### ", "#   #", "#### "};
char* c[] = {" ####", "#    ", "#    ", "#    ", " ####"};
char* d[] = {"#### ", "#   #", "#   #", "#   #", "#### "};
char* no[] = {"     ", "     ", "     ", "     ", "     ",};
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
    string s(_width, ' ');

    C = new char*[5];

    for (int r = 0; r < 5; r++) {
        C[r] = new char[_width + 1];
        memset(C[r], NULL, _width + 1);
        if (x == 'A') {
            strncpy(C[r], a[r], _width);
        } else if (x == 'B') {
            strncpy(C[r], b[r], _width);
        } else if (x == 'C') {
            strncpy(C[r], c[r], _width);
        } else if (x == 'D') {
            strncpy(C[r], d[r], _width);
        } else {
            strncpy(C[r], no[r], _width);
        }
    }

    /*for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            cout << C[r][c];
        }
        cout << endl;
    }*/
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
        for (int j = 0; j < _width; j++) {
            cout << C[i][j];
            s += C[i][j];
        }
        cout << endl;
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
    // NEW CANVAS
    // Initialize new Canvas
    _width += 7;
    char** nC = new char*[5];

    for (int r = 0; r < 5; r++) {
        nC[r] = new char[_width + 1];
        memset(nC[r], '\0', _width + 1);

        if (x == 'A') {
            strncpy(nC[r], C[r], _width - 7);
            strncat(nC[r], "  ", 2);
            strncpy(nC[r], a[r], 5);
        } else if (x == 'B') {
            strncpy(nC[r], C[r], _width - 7);
            strncat(nC[r], "  ", 2);
            strncpy(nC[r], b[r], 5);
        } else if (x == 'C') {
            strncpy(nC[r], C[r], _width - 7);
            strncat(nC[r], "  ", 2);
            strncpy(nC[r], c[r], 5);
        } else if (x == 'D') {
            strncpy(nC[r], C[r], _width - 7);
            strncat(nC[r], "  ", 2);
            strncpy(nC[r], d[r], 5);
        } else {
            strncpy(nC[r], C[r], _width - 7);
            strncat(nC[r], "  ", 2);
            strncpy(nC[r], no[r], 5);
        }
    }

    for (int r = 0; r < 5; r++) {
        delete [] C[r];
    }

    C = nC;

    for (int r = 0; r < 5; r++) {
        delete [] nC[r];
    }
}

// Destructor. Deallocates all of the memory allocated by the canvas.
Canvas::~Canvas() {
    for (int i = 0; i < _width; i++) {
        delete [] C[i];
    }
    delete [] C;
}
