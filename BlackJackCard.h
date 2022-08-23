#pragma once
#ifndef BLACKJACKCARD_H
#define BLACKJACKCARD_H
#include "Card.h"
#include "util.h"

class BlackJackCard : public Card {
    public:
        BlackJackCard(int faceVal, Suit suit);
        int getValue();
        int minValue();
        int maxValue();
        bool isAce();
        bool isFaceCard();
};

#endif
