//
// Created by tpc345 on 7/30/2018.
//
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

}

void LFGQueue::push_player(Player* p) {

}

Player* LFGQueue::front_player(Player::Role r) {

}

void LFGQueue::pop_player(Player::Role r) {

}

bool LFGQueue::front_group(Player** group) {

}

void LFGQueue::pop_group() {

}
