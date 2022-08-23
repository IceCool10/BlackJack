#pragma once
#ifndef PLAYER_H
#define BLACKJACKPLAYER_H
#include "Deck.h"
#include "Hand.h"
#include "stdio.h"

#include <memory>
using namespace std;

class BlackJackPlayer {

    private:
        Hand<BlackJackCard>* hand;
        Deck<BlackJackCard>* deck;
    public:
        BlackJackPlayer(Deck<BlackJackCard>* deck);
        ~BlackJackPlayer();
        void hit();
        bool isBusted();
        int getScore();
        
};

#endif
