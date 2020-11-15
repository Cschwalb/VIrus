//
// Created by thepu on 10/27/2020.
//

#include <iostream>
#include "PriceGenerator.h"
#include "Player.h"

PriceGenerator::PriceGenerator() {
    std::cout<< "Price Generator Constructor" << std::endl;
}

const float PriceGenerator::generatePriceForQuantityPlayerBuy(const enum ComplexityPrice price,
        Player & pPlayer,
        int nQuantity) {
    const auto playerRegion = (pPlayer.getRegionHeat() / 100); // turn this to a percentage
    float fComplexCost;
    fComplexCost = ((1 + playerRegion) * price * nQuantity) + this->volatilityGenerator(pPlayer) - (nQuantity * playerRegion);
    return fComplexCost;
}

const float PriceGenerator::generatePriceForQuantityPlayerSell(const enum ComplexityPrice price,
        Player & pPlayer,
        int nQuantity) {
    const auto playerRegion = (pPlayer.getRegionHeat() / 100); // turn this to a percentage
    float fComplexCost;
    fComplexCost = ((1 + playerRegion) * price * nQuantity) - this->volatilityGenerator(pPlayer)*(-1) - (nQuantity * playerRegion);
    return fComplexCost;
}

float PriceGenerator::volatilityGenerator(Player &pPlayer) {
    float vol = 0;
    vol = (std::rand() / 100) / 10000 + (1 + (pPlayer.getRegionHeat() / 100));
    return vol;
}
