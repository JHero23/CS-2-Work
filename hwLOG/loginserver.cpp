//
// Created by tpc345 on 8/13/2018.
//
#include "loginserver.h"

using namespace std;

// Creates a new server with no accounts.
LoginServer::LoginServer() {

}

// Adds a user to the system with the
// parameter username and password.
// Returns false if the LoginServer already has an
// account with the parameter username. Otherwise returns true.
bool LoginServer::create_user(string username, string password) {
    unordered_map<string, string>::const_iterator got = M.find(username);

    if (got == M.end()) {
        M.insert({username, password});
        return true;
    } else {
        return false;
    }
}

// Deletes a user from the system with the specified info.
// Returns true if the parameter information was valid
// (and the user was successfully deleted).
// Otherwise returns false.
bool LoginServer::delete_user(string username, string password) {
    unordered_map<string, string>::const_iterator got = M.find(username);

    if (got == M.end() || got->second != password) {
        return false;
    } else {
        M.erase(username);
    }
}

// Returns the total number of accounts in the system.
int LoginServer::total_user_count() {
    return M.size();
}

// Tries to log in a user.
// Returns true if there is a user with this password
// that is not already logged in (i.e. whether login occurred).
// Otherwise returns false.
bool LoginServer::login(string username, string password) {
    unordered_map<string, string>::const_iterator got_p = M.find(username);

    if (is_logged_in(username) || got_p == M.end()) {
        return false;
    }

    if (got_p->first == username && got_p->second == password) {
        S.insert(username);
        return true;
    }
    return false;
}

// Tries to log out a user.
// Returns true if a user with this user name was logged in.
// Otherwise returns false.
bool LoginServer::logout(string username) {
    unordered_set<string>::const_iterator got_u = S.find(username);

    if (got_u == S.end()) {
        return false;
    } else {
        S.erase(username);
        return true;
    }
}

// Returns true if a user with this name is logged in.
// Otherwise returns false.
bool LoginServer::is_logged_in(string username) {
    unordered_set<string>::const_iterator got_u = S.find(username);

    if (got_u == S.end()) {
        return false;
    } else {
        return true;
    }
}

// Returns the number of logged-in users.
int LoginServer::active_user_count() {
    return S.size();
}

// Logs out all users.
void LoginServer::logout_everyone() {
    S.clear();
}

// Changes a user's password.
// Returns true if there is an account with the parameter
// username and password old_pw (i.e. the password changed).
// Otherwise returns false.
bool LoginServer::change_password(string username, string old_pw, string new_pw) {
    auto got = M.find(username);

    if (got == M.end()) {
        return false;
    }

    if (got->first == username && got->second == old_pw) {
        got->second = new_pw;
        return true;
    } else {
        return false;
    }
}

