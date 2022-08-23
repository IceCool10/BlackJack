#pragma once
#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
using namespace std;

template <class CardType>
class Deck {
    private:
        vector<CardType*> cards;
        int dealtIndex;
        Deck();
        static Deck* instance;
    
    public:
        static Deck<CardType>* getInstance();
        void initDeck();
        Deck(Deck const&) = delete;
        void operator =(Deck const&) = delete;
        ~Deck();
        int remainingCards();
        void shuffle();
        vector<CardType*> dealHand(int numberOfCards);
        CardType* dealCard();
        void printDeck();

};

template <class CardType>
Deck<CardType>* Deck<CardType>::instance = nullptr;
#endif
