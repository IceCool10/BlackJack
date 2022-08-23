#include <iostream>
#include "Card.h"
#include "util.h"

Card::Card() {
    this->faceValue = 0;
    this->suit = Suit::END;
    this->available = false;
}

Card::Card(int faceValue, Suit s) {
    this->faceValue = faceValue;
    this->suit = s;
}

bool Card::isAvailable() {
    return this->available;
}

void Card::markAvailable() {
    this->available = true;
}

void Card::markUnavailable() {
    this->available = false;
}

int Card::getValue() {
    return this->faceValue;
}

Suit Card::getSuit() {
    return this->suit;
}
