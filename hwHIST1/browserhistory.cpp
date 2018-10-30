//
// Created by joelg on 7/20/2018.
//
#include <iostream>
#include "browserhistory.h"

// Creates a new browser history with only one page visited: default_url
BrowserHistory::BrowserHistory(string default_url) {
    past.push(default_url);
}

// Returns the current page.
string BrowserHistory::current_url() {
    if (past.empty()) {
        return future.top();
    }
    return past.top();
}

// Moves the browser to a new page url via,
// e.g., clicking a link, typing into the address bar, etc.
void BrowserHistory::go_to_url(string url) {
    while (!future.empty()) {
        future.pop();
    }
    past.push(url);
}

// Moves back (into the past) by one url.
//
// If there is no past url to move to, does nothing.
void BrowserHistory::back() {
    if (past.empty()) {
        return;
    }

    string current_url;
    current_url = past.top();
    past.pop();
    future.push(current_url);
}

// Returns whether there is a url in the past,
// i.e. whether the back button can be pushed.
bool BrowserHistory::can_go_back() {
    if (past.size() > 1) {
        return true;
    }
    return false;
}

// Returns how many urls are in the past,
// i.e. how many times in a row the back button could be pushed.
int BrowserHistory::past_url_count() {
    if (past.size() > 1) {
        return past.size() - 1;
    }
    return 0;
}

// Moves forward (into the future) by one url.
//
// If there is no future url to move to, does nothing.
void BrowserHistory::forward() {
    if (future.empty()) {
        return;
    }

    string current_url;
    current_url = future.top();
    future.pop();
    past.push(current_url);
}

// Returns whether there is a url in future,
// i.e. whether the future button can be pushed.
bool BrowserHistory::can_go_forward() {
    if (future.size() >= 1) {
        return true;
    }
    return false;
}

// Returns how many urls are in the future,
// i.e. how many times in a row the forward button could be pushed.
int BrowserHistory::future_url_count() {
    return future.size();
}