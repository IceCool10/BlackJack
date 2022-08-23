#include <iostream>
#include "Player.h"
#include "Card.h"
#include "BlackJackCard.h"
#include "Deck.h"
#include "Hand.h"
#include <Windows.h>
using namespace std;

int main() {

    Deck<BlackJackCard>* deck = Deck<BlackJackCard>::getInstance();
    deck->shuffle();
    deck->printDeck();
    BlackJackPlayer player1(deck);
    printf("Player 1 score : %d\n", player1.getScore());
    delete deck;
}
