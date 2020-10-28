//
// Created by thepu on 10/27/2020.
//

#include <iostream>
#include "PriceGenerator.h"
#include "Player.h"

PriceGenerator::PriceGenerator() {
    std::cout<< "Price Generator Constructor" << std::endl;
}

const float
PriceGenerator::generatePriceForQuantityPlayerBuy(const enum ComplexityPrice price,
        Player & pPlayer,
        int nQuantity) {
    const auto playerRegion = (pPlayer.getRegionHeat() / 100); // turn this to a percentage
    float fComplexCost;
    fComplexCost = ((1 + playerRegion) * price * nQuantity) + this->volatilityGenerator(pPlayer);
    return fComplexCost;
}

const float PriceGenerator::generatePriceForQuantityPlayerSell(const enum ComplexityPrice price,
        Player & pPlayer,
        int nQuantity) {
    const auto playerRegion = (pPlayer.getRegionHeat() / 100); // turn this to a percentage
    float fComplexCost;
    fComplexCost = ((1 + playerRegion) * price * nQuantity) - this->volatilityGenerator(pPlayer);
    return fComplexCost;
}

float PriceGenerator::volatilityGenerator(Player pPlayer) {
    float vol = pPlayer.getRegionHeat() / 100;
    vol = vol * (std::rand() / 100);
    std::cout<< "[+] Volatility is " << vol << std::endl;
    return vol;
}
