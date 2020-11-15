//
// Created by thepu on 10/27/2020.
//
#ifndef HACKERSIM_UTILITY_H
#define HACKERSIM_UTILITY_H
#include <iostream>
#include <iomanip>
#include "VIrus.h"
// pinging ourselves...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PORT 8080

class utility {
public:
    float static getRandomPercentage();
    bool static VIrusattack(VIrus&);
    bool static VIrusdefend(VIrus&);
    std::basic_string<char> static LINFO(const char*);
    template<typename T>
    T PrecisionSetPrint(T x){
        std::cout.setf(std::ios::fixed, std::ios::floatfield);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(2);
        return x;
    }

    float static inline bidask(float fSell, float fBuy){
        return (fSell + fBuy) / 2; // average of the two...
    }
    std::basic_string<char> static printMenu();
    int static getMenu();
    void error(const char* msg);

};


#endif //HACKERSIM_UTILITY_H
