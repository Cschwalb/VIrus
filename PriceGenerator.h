//
// Created by thepu on 10/27/2020.
//

#ifndef HACKERSIM_PRICEGENERATOR_H
#define HACKERSIM_PRICEGENERATOR_H
#include "vector"
#include "string"
#include "Player.h"

enum ComplexityPrice{
        zero = 100,
        one = 200,
        two = 350,
        three = 780,
        four = 987,
        five = 1312,
        six = 1922,
        seven = 2400,
        eight = 2918,
        nine = 3217,
        ten = 4500
};

class PriceGenerator {
public:
    PriceGenerator();
    float volatilityGenerator(Player pPlayer);
    const float generatePriceForQuantityPlayerBuy(const enum ComplexityPrice, Player &, int nQuantity);
    const float generatePriceForQuantityPlayerSell(const enum ComplexityPrice, Player &, int nQuantity);
};


#endif //HACKERSIM_PRICEGENERATOR_H
