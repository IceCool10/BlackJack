#pragma once
#ifndef CARD_H
#define CARD_H
#include "util.h"

class Card {
    private:
        bool available;
    protected:
        int faceValue;
        Suit suit;
    public:
        Card();
        Card(int faceValue, Suit s);
        bool isAvailable();
        void markAvailable();
        void markUnavailable();
        int getValue();       
        Suit getSuit();
};
#endif
