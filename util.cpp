#include "util.h"

int myRandom(int mod) {
    srand(time(NULL));
    return rand() % mod;
}
