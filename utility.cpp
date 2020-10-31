//
// Created by thepu on 10/27/2020.
//

#include <cstdlib>
#include <iostream>
#include "utility.h"

float utility::getRandomPercentage() {
    return (std::rand()%100) / 100;
}

bool utility::VIrusattack(VIrus &vi) {
    if (vi.getComplexity() >
        (getRandomPercentage() * getRandomPercentage() / getRandomPercentage())) {
        std::cout << "[+] true attack!" << std::endl;
        return true;
    } else {
        return false;
    }
}

bool utility::VIrusdefend(VIrus &vi) {
    if(VIrusattack(vi) == true)
        return false;
    else
        return true;
}

std::basic_string<char> utility::LINFO(const char* pTotal) {
   std::cout<<"\n[++++] " << pTotal<< std::endl;
}






