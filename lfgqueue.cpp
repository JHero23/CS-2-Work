//
// Created by joelg on 7/30/2018.
//
#include <iostream>
#include "lfgqueue.h"

using namespace std;

// All of the methods are the same
// as in hwLFG1.
LFGQueue::LFGQueue() {
    for (int i = 0; i < 3; i++) {
        heads[i] = nullptr;
        tails[i] = nullptr;
        counts[i] = 0;
    }
}

int LFGQueue::size() {
    int count = 0;

    for (int i = 0; i < 3; i++) {
        count += counts[i];
    }

    return count;
}

void LFGQueue::push_player(Player* p) {
    // Check the role
    Node* player = new Node();
    player->p = p;
    player->next = nullptr;

    if (size() == 0 || heads[p->role()] == nullptr) {
        heads[p->role()] = player;
    } else {
        player->next = heads[p->role()];
        heads[p->role()] = player;
        tails[p->role()]->next = player;
        tails[p->role()] = player;
    }

    tails[p->role()] = player;
    counts[p->role()]++;
}

Player* LFGQueue::front_player(Player::Role r) {
    if (heads[r] != nullptr) {
        return heads[r]->p;
    }

    return nullptr;
}

void LFGQueue::pop_player(Player::Role r) {
    if (r == 0) {

    } else if (r == 1) {

    } else if (r == 2) {

    }
}

bool LFGQueue::front_group(Player** group) {
    return false;
}

void LFGQueue::pop_group() {

}
