//
// Created by thepu on 10/27/2020.
//
#ifndef HACKERSIM_UTILITY_H
#define HACKERSIM_UTILITY_H
#include <iostream>
#include <iomanip>
#include "VIrus.h"

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


};


#endif //HACKERSIM_UTILITY_H
