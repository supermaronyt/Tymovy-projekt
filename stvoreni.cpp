//
// Created by novak.ondrej on 10.12.2025.
//

#include "stvoreni.h"
#include <string>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int attack(int damage, int evasionRate, bool dodged) {
    srand(time(NULL));

    int random = rand() % 100;
    if (evasionRate >= random) {
        dodged = true;
        return 0;
    }
    else {
        dodged = false;
        return damage;
    }
}
