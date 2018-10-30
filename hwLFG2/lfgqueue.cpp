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
    Node* player = new Node();
    player->p = p;
    player->next = nullptr;

    if (size() == 0 || heads[p->role()] == nullptr) {
        heads[p->role()] = player;
    } else {
        tails[p->role()]->next = player;
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
    Node* temp = heads[r];
    heads[r] = heads[r]->next;

    delete temp;

    counts[r]--;
}

bool LFGQueue::front_group(Player** group) {
    group[0] = front_player(Player::Defender);

    if (group[0] == nullptr) {
        return false;
    }

    group[1] = front_player(Player::Hunter);

    if (group[1] == nullptr) {
        return false;
    }

    group[2] = front_player(Player::Bard);

    if (group[2] == nullptr) {
        return false;
    }

    return true;
}

void LFGQueue::pop_group() {
    Player* group;

    if (front_group(&group)) {
        pop_player(Player::Defender);
        pop_player(Player::Hunter);
        pop_player(Player::Bard);
    }
}
