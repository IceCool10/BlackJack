#include "Hand.h"
#include <vector>
using namespace std;

template<class CardType>
Hand<CardType>::Hand() {
    this->score = 0;
}

template<class CardType>
void Hand<CardType>::addCard(CardType* card) {
    this->cards.push_back(card);
}

template<class CardType>
int Hand<CardType>::getScore() {
    for(CardType* card : cards) {
        if (card->getValue() == 1) {
            if (this->score + 11 > 21) {
                this->score += card->getValue();
            }
            else {
                this->score += 11;
            }

        }
        else {
            this->score += card->getValue();
        }
    }
    return this->score;
}

template <class CardType>
void Hand<CardType>::initHand(vector<CardType*> v) {
    this->cards.insert(this->cards.end(), make_move_iterator(v.begin()), make_move_iterator(v.end()));
}


















template class Hand<BlackJackCard>;
