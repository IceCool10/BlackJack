#pragma once
#ifndef UTIL_H
#define UTIL_H
#include <stdio.h>
#include <type_traits>
#include <ctime>
#include <cstdlib>

enum Suit {
    Club,
    Diamond,
    Heart,
    Spade,
    END
};

inline Suit& operator ++ (Suit& e)
{
    e = Suit(static_cast<std::underlying_type<Suit>::type>(e) + 1);
    return e;
}

int myRandom(int mod);
#endif
