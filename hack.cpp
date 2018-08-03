//
// Created by joelg on 8/2/2018.
//
#include "hack.h"

using namespace std;

void hack_Evil(EvilComputer* ec, string user, string password) {
    // if hacked, return
    if (ec->is_hacked(user)) {
        return;
    }
    // guess
    ec->guess(user, "gato" + password);
    ec->guess(user, password + "gato");
    // add more
    int len = password.length();
    if (len < 4) {
        char ch;
        for (int i = 0; i < 36; i++) {
            if (i < 10) {
                ch = i + '0';
            } else {
                ch = (i - 10) + 'a';
            }
            hack_Evil(ec, user, password + ch);
        }
    }
}

void hack_Chief(EvilComputer* ec, string user, string password) {
    // if hacked, return
    if (ec->is_hacked(user)) {
        return;
    }
    // guess
    ec->guess(user, "haha" + password);
    // add more
    int len = password.length();
    if (len < 4) {
        char ch;
        for (int i = 0; i < 36; i++) {
            if (i < 10) {
                ch = i + '0';
            } else {
                ch = (i - 10) + 'a';
            }
            hack_Chief(ec, user, password + ch);
        }
    }
}

void hack_Mean(EvilComputer* ec, string user, string password) {
    // if hacked, return
    if (ec->is_hacked(user)) {
        return;
    }
    // guess
    ec->guess(user, password);
    // add more
    int len = password.length();
    if (len < 8) {
        hack_Mean(ec, user, password + 'g');
        hack_Mean(ec, user, password + 'r');
    }
}

void hack_Dave(EvilComputer* ec, string user, string password) {
    // if hacked, return
    if (ec->is_hacked(user)) {
        return;
    }
    // add more
    int len = password.length();
    if (len < 4) {
        for (char a = '0'; a <= '9'; a++) {
            hack_Dave(ec, user, password + a);
        }
    }
    // guess
    ec->guess(user, password);
}

void hack_Guest(EvilComputer* ec, string user, string password) {
    // if hacked, return
    if (ec->is_hacked("Guest")) {
        return;
    }
    // guess
    ec->guess(user, password);
    //add more
}

void hack(EvilComputer* ec) {
    hack_Guest(ec, "Guest", "passw123");
    hack_Dave(ec, "Dave", "");
    hack_Mean(ec, "Mr. Mean", "");
    hack_Chief(ec, "Ms. Chief", "");
    hack_Evil(ec, "Dr. Evil", "");
}

