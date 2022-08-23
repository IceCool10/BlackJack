#include "Card.h"
#include "BlackJackCard.h"
#include "Deck.h"
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

template<class CardType>
int Deck<CardType>::remainingCards() {
    return this->cards.size() - dealtIndex;
}

template<class CardType>
void Deck<CardType>::shuffle() {
    random_shuffle(cards.begin(), cards.end(), myRandom);
}

template<class CardType>
Deck<CardType>* Deck<CardType>::getInstance() {
    if (Deck::instance == nullptr) {
        Deck::instance = new Deck<CardType>();
        instance->initDeck();
    }
    
    return instance;
}

template<class CardType>
Deck<CardType>::Deck() { }

template<class CardType>
void Deck<CardType>::initDeck() {

    for(int i = 0; i < 13; i++) {
        for (Suit s = Suit::Club; s != Suit::END; ++s) {
            int faceVal = i + 1;
            CardType* card = new CardType(faceVal, s);
            this->cards.push_back(card);
        }
    }
    this->dealtIndex = 0;
}

template<class CardType>
vector<CardType*> Deck<CardType>::dealHand(int numberOfCards) {
    vector<CardType*> hand;
    for (int i = 0; i < numberOfCards; i++) {
        if (this->remainingCards() > 0) {
            hand.push_back(this->cards[dealtIndex++]);
        }
        else {
            printf("[-] Not enough cards left in the deck : only %d cards remaining\n", this->remainingCards());
            // maybe :
            return vector<CardType*>();
        }
    }
    return hand;
}

template<class CardType>
CardType* Deck<CardType>::dealCard() {
    if (this->remainingCards() > 0) {
        return this->cards[dealtIndex++];
    }
    return NULL;
}

template<class CardType>
Deck<CardType>::~Deck() {
    printf("~Deck\n");
    for (int i = 0; i < cards.size(); i++) {
        delete cards[i];
    }
}

template<class CardType>
void Deck<CardType>::printDeck() {
    for (int i = 0; i < 10; i++) {
        printf("value : %d, %d\n", this->cards[i]->getValue(), this->cards[i]->getSuit());
    }
}

template class Deck<Card>;
template class Deck<BlackJackCard>;

