#include "Player.h"
#include "Deck.h"

BlackJackPlayer::BlackJackPlayer(Deck<BlackJackCard>* deck) {
    this->hand = new Hand<BlackJackCard>();
    this->deck = deck;
    this->hand->initHand(this->deck->dealHand(2));
}

BlackJackPlayer::~BlackJackPlayer() {
    if (this->hand)
        delete this->hand;
}

void BlackJackPlayer::hit() {
    this->hand->addCard(this->deck->dealCard());
}

bool BlackJackPlayer::isBusted() {
    if (this->hand->getScore() > 21) {
        return true;
    }
    return false;
}

int BlackJackPlayer::getScore() {
    return this->hand->getScore();
}
