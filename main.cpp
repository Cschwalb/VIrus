#include <iostream>
#include <istream>
#include <iomanip>
#include "fstream"
#include "Player.h"
#include "PriceGenerator.h"
#include "utility.h"
// the point of thi7s game is to follow the old drug dealer simulator but with new code
// I'm excited.  this is 10/26/2020 by caleb schwalb


int main() {
    std::cout << "Hello, World!" << std::endl;
    auto out = PriceGenerator();
    Player *pPlay = new Player();
    utility ut;
    std::cout<<ut.PrecisionSetPrint(
            out.generatePriceForQuantityPlayerSell(
                    ComplexityPrice::two,
                    *pPlay,
                    2))
                    << std::endl;
    std::cout<<ut.PrecisionSetPrint(
            out.generatePriceForQuantityPlayerBuy(
                    ComplexityPrice::two,
                    *pPlay,
                    2))
             << std::endl;
    std::cout<<ut.PrecisionSetPrint(
            utility::bidask((out.generatePriceForQuantityPlayerSell(
                    ComplexityPrice::two,
                    *pPlay,
                    2)),
                    out.generatePriceForQuantityPlayerBuy(
                    ComplexityPrice::two,
                    *pPlay,
                    2)))
             << std::endl;
    utility::getMenu();
    std::cout<<"caleb caleb caleb " << pPlay->getBackpack().countWritten()<<std::endl;
    std::cout<<pPlay->getBackpack().dumpCurrentItems()<<std::endl;
    VIrus *newVirus = new VIrus("Rootkit level 2", "second iteration of the first attack...",
                               5425, 2, 5);
    pPlay->developVIrus(*newVirus);
    pPlay->addVirus(*newVirus);
    std::cout<<"caleb caleb caleb " << pPlay->getBackpack().countWritten()<<std::endl;
    std::cout<<newVirus->toString().c_str()<<std::endl;
    std::cout<<pPlay->getBackpack().dumpCurrentItems()<<std::endl;
    /*
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);
    std::cout<<out.generatePriceForQuantityPlayerBuy(ComplexityPrice::two, *pPlay, 10)<<std::endl;
    */
    delete newVirus;
    return 0;
}
