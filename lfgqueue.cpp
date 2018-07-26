//
// Created by tpc345 on 7/24/2018.
//
#include <iostream>
#include "lfgqueue.h"

using namespace std;

// Constructs a new empty queue
LFGQueue::LFGQueue() {
    count = 0;
    capacity = 2;
    players = new Player*[capacity];

    for (int i = 0; i < capacity; i++) {
        players[i] = nullptr;
    }
}

// Returns the number of players in the queue.
int LFGQueue::size() {
    return count;
}

// Pushes a pointer to a player onto the back of the queue.
void LFGQueue::push_player(Player* p) {
    cout << "PUSH" << endl;
    if (count == capacity) {
        capacity *= 2;

        Player** new_players = new Player*[capacity];

        for (int i = 0; i < count; i++) {
            new_players[i] = players[i];
        }

        for (int i = count; i < capacity; i++) {
            new_players[i] = nullptr;
        }

        delete players;
        players = new_players;
    }
    players[count] = p;
    count++;

    for (int i = 0; i < count; i++) {
        cout << i << ": " << players[i]->name() << "-" << players[i]->role() << endl;
    }
    cout << endl;
}

// Returns a pointer to the frontmost player
// with the specified role.
// If no such player exists, returns nullptr.
Player* LFGQueue::front_player(Player::Role r) {
    for (int i = 0; i < count; i++) {
        if (players[i]->role() == r) {
            return players[i];
        }
    }

    return nullptr;
}

// Removes the frontmost player with the specified role.
// If no such player exists, does nothing.
void LFGQueue::pop_player(Player::Role r) {
    cout << "POP" << endl;
    for (int i = 0; i < count; i++) {
        if (players[i]->role() == r) {
            players[i] = nullptr;
            break;
        }
    }

    for (int i = 0; i < count; i++) {
        players[i] = players[i+1];
        if (players[i] == nullptr) {
            cout << i << ": NULL" << endl;
        } else {
            cout << i << " :" << players[i]->name() << "-" << players[i]->role() << endl;
        }
    }
    count--;
    cout << endl;
}

// Returns whether the queue contains a complete group
// (a Defender, a Hunter, and a Bard).
//
// If the queue contains a complete group, the method
// sets the first three elements of the array parameter
// equal to the addresses of the frontmost:
// 1. Defender (index 0)
// 2. Hunter (index 1)
// 3. Bard (index 2)
bool LFGQueue::front_group(Player** group) {
    return false;
}

// Removes the frontmost Defender, Hunter, and Bard
// from the queue. If some role has no player with that role,
// then does nothing.
void LFGQueue::pop_group() {
    return;
}
