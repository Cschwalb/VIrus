//
// Created by thepu on 10/27/2020.
//

#include <cstdlib>
#include <iostream>
#include "utility.h"
#include "sstream"

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
   return pTotal;
}

std::basic_string<char> utility::printMenu() {
    std::stringstream menu;
    menu << "[1] Buy\n[2]Sell\n[3]Inventory\n[4]Self\n[5]Next Day\n";
    return menu.str().c_str();
}

int utility::getMenu() {
    std::cout<<printMenu();
    int nEnter = 0;
    std::cout<<"Please enter a choice:  ";
    std::cin>>nEnter;
    return nEnter;
}



void utility::error(const char *msg) {
    std::cout<<msg<<std::endl;
    perror(msg);
    exit(-5);
}




