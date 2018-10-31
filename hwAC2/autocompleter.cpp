//
// Created by tpc345 on 8/13/2018.
//
#include "autocompleter.h"

using namespace std;

// Same as hwAC1
Autocompleter::Autocompleter() {
    root = nullptr;
}

// a.k.a. add()
void Autocompleter::insert(string x) {
    Node* n = new Node(x);

    if (root == nullptr) {
        root = n;
    } else {
        Node* temp = root;
        while (temp != nullptr) {
            if (temp->s == x) {
                return;
            }

            if (temp->s > x) {
                if (temp->left == nullptr) {
                    temp->left = n;
                } else {
                    temp = temp->left;
                }
            } else if (temp->s < x) {
                if (temp->right == nullptr) {
                    temp->right = n;
                } else {
                    temp = temp->right;
                }
            }
        }

    }
}

int Autocompleter::size() {
    return size_recurse(root);
}

void Autocompleter::completions(string x, string* suggestions) {
    int _size = 5;

    for (int i = 0; i < _size; i++) {
        suggestions[i] = "";
    }

    completions_recurse(x, suggestions, root);
}

// Helper method for size()
int Autocompleter::size_recurse(Node* root) {
    if (root == nullptr) {
        return 0;
    } else {
        return 1 + size_recurse(root->left) + size_recurse(root->right);
    }
}

// Helper method for completions().
//
// Suggested base cases:
// If root is nullptr, return.
// If the last entry of the suggestions array is not "", return.
// (since completions() has already found 3 suggestions).
//
// Suggested recursive case:
// -If left subtree can contain strings that start with x,
//  recurse on left subtree.
// -If root's string starts with x,
//  add root->s to first empty location in results.
// -If right subtree can contain strings that start with x,
//  recurse on right subtree.
void Autocompleter::completions_recurse(string x, string* suggestions, Node* root) {
    int _size = 5;

    if (root == nullptr || suggestions[4] != "") {
        return;
    }

    string subs = root->s.substr(0, x.length());
    if (subs >= x) {
        completions_recurse(x, suggestions, root->left);
    }
    if (subs == x) {
        for (int i = 0; i < _size; i++) {
            if (suggestions[i] == "") {
                suggestions[i] = root->s;
                break;
            }
        }
    }
    if (subs <= x){
        completions_recurse(x, suggestions, root->right);
    }
}
