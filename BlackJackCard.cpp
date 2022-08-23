#include "BlackJackCard.h"
#include <stdio.h>
using namespace std;

BlackJackCard::BlackJackCard(int faceVal, Suit s) : Card(faceVal,s) {
}

int BlackJackCard::getValue() {
    if (isAce())
        return 1;
    else if (this->faceValue >= 11 && this->faceValue <= 13) {
        return 10;
    }
    return this->faceValue;
}

int BlackJackCard::minValue() {
    if (isAce()) 
        return 1;
    else
        return this->getValue();
}

int BlackJackCard::maxValue() {
    if (isAce()) {
        return 11;
    }
    else {
        return this->getValue();
    }
}

bool BlackJackCard::isAce() {
    return (this->faceValue == 1);
}

bool BlackJackCard::isFaceCard() {
    return (this->faceValue >= 11 && this->faceValue <= 13);
}









