#include <cstdio>
#include <string>
#include <iostream>

//
// Created by novak.ondrej on 10.12.2025.
//

#ifndef TYMOVY_PROJEKT_STVORENI_H
#define TYMOVY_PROJEKT_STVORENI_H

using namespace std;
class stvoreni {
public:
    int health = 0;
    int damage = 0;
    int evasionRate = 0;


};

int attack();
void onAttackRecieved();

#endif //TYMOVY_PROJEKT_STVORENI_H
