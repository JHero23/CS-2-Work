//
// Created by joelg on 7/20/2018.
//
#include <iostream>
#include "browserhistory.h"

// Creates a new browser history with only one page visited: default_url
BrowserHistory::BrowserHistory(string default_url) {
    past.push("(" + default_url + ")");
}

// Returns the current page.
string BrowserHistory::current_url() {
    //stack<string> temp_stack;
    string cur_url;

    while (true) {
        cur_url = past.top();
        if (cur_url[0] == '(') {
            cur_url.erase(0, 1);
            cur_url.erase(cur_url.length() - 1, 1);
            //temp_stack.push(cur_url);
            past.pop();
            past.push(cur_url);
            return cur_url;
        }
    }
}

// Moves the browser to a new page url via,
// e.g., clicking a link, typing into the address bar, etc.
void BrowserHistory::go_to_url(string url) {
    stack<string> temp_stack;
    string cur_url;

    url = "(" + url + ")";
    past.push(url);
}

// Moves back (into the past) by one url.
//
// If there is no past url to move to, does nothing.
void BrowserHistory::back() {
    string cur_url;

    cur_url = past.top();
    if (cur_url[0] = '(') {
        cur_url.erase(0, 1);
        cur_url.erase(cur_url.length() - 1, 1);
    }
    past.pop();
}

// Returns whether there is a url in the past,
// i.e. whether the back button can be pushed.
bool BrowserHistory::can_go_back() {
    return (past.size() > 1) ? (true) : (false);
}

// Returns how many urls are in the past,
// i.e. how many times in a row the back button could be pushed.
int BrowserHistory::past_url_count() {
    return past.size() == 0 ? (past.size() == 1) : (past.size() - 1);
}

// Moves forward (into the future) by one url.
//
// If there is no future url to move to, does nothing.
void BrowserHistory::forward() {

}

// Returns whether there is a url in future,
// i.e. whether the future button can be pushed.
bool BrowserHistory::can_go_forward() {
    return (future.size() > 1) ? (true) : (false);
}

// Returns how many urls are in the future,
// i.e. how many times in a row the forward button could be pushed.
int BrowserHistory::future_url_count() {
    return future.size() == 0 ? (future.size() == 1) : (future.size() - 1);
}