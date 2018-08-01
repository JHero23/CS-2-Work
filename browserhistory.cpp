#include "browserhistory.h"
#include <iostream>
//
// Created by joelg on 7/31/2018.
//
// Creates a new browser history with only one page visited: default_url
BrowserHistory::BrowserHistory(string default_url) {
    head = tail = current = new Node;
    current->url = default_url;
    current->next = current->prev = nullptr;
    head = tail = current;
}

// Returns the current page.
string BrowserHistory::current_url() {
    return current->url;
}

// Moves the browser to a new page url via,
// e.g., clicking a link, typing into the address bar, etc.
void BrowserHistory::go_to_url(string url) {
    Node* website = new Node();
    website->url = url;
    website->next = website->prev = nullptr;

    Node* cur = head;

    while (cur != tail) {
        cur = cur->next;
    }


    tail = website;
    cur->next = website;
    website->prev = cur;
    website->next = tail;
    current = website;

    int i = 0;
    Node* temp = head;
    while (temp != tail) {
        cout << i << ": " << temp->url << endl;
        temp = temp->next;
        i++;
    }

    cout << endl;
}

// Moves back (into the past) by one url.
void BrowserHistory::back() {
    current = current->prev;
}

// Returns whether there is a url in the past,
// i.e. whether the back button can be pushed.
bool BrowserHistory::can_go_back() {
    if (current == head) {
        return false;
    }
    return true;
}

// Returns how many urls are in the past,
// i.e. how many times in a row the back button could be pushed.
int BrowserHistory::past_url_count() {
    int count = 0;
    Node* cur = current;

    while (cur != head) {
        cur = cur->prev;
        count++;
    }

    return count;
}

// Moves forward (into the future) by one url.
void BrowserHistory::forward() {
    current = current->next;
}

// Returns whether there is a url in future,
// i.e. whether the future button can be pushed.
bool BrowserHistory::can_go_forward() {
    if (current == tail) {
        return false;
    }
    return true;
}

// Returns how many urls are in the future,
// i.e. how many times in a row the forward button could be pushed.
int BrowserHistory::future_url_count() {
    int count = 0;
    Node* cur = current;

    while (cur != tail) {
        cur = cur->next;
        count++;
    }

    return count;
}
