#pragma once
#ifndef HAND_H
#define HAND_H
#include "Card.h"
#include "BlackJackCard.h"
#include <vector>
using namespace std;

template <class CardType>
class Hand {
    private:
        vector<CardType*> cards;
        int score;

    public:
        Hand();
        void addCard(CardType* card);
        void initHand(vector<CardType*> v);
        int getScore();
};
#endif
