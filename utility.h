//
// Created by thepu on 10/27/2020.
//
#ifndef HACKERSIM_UTILITY_H
#define HACKERSIM_UTILITY_H
#include "VIrus.h"

class utility {
public:
    float static getRandomPercentage();
    bool static VIrusattack(VIrus&);
    bool static VIrusdefend(VIrus&);
};


#endif //HACKERSIM_UTILITY_H
