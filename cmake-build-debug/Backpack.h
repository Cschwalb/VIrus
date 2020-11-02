//
// Created by calebs on 10/26/2020.
//

#ifndef HACKERSIM_BACKPACK_H
#define HACKERSIM_BACKPACK_H
#include "string"
#include "../VIrus.h"
#include "list"
class Backpack { // usb stick?
public:
    Backpack();
    // copy method?
    bool addItem(VIrus); // need to add a virus
    bool takeItem(VIrus);
    double getCash();
    void addCash(double dCash);
    int countVirus(std::basic_string<char>);
    double getMaxStorage(){
        return this->m_nMaxStorage;
    }
    double getCurrentStorage(){
        return this->m_nCurrentStorage;
    }
    // basicall a usb stick.
    const std::string toString();
    std::string dumpCurrentItems();

    inline int countWritten(){
        return this->m_lViruses.size();
    }
private:
    double m_nMaxStorage;
    double m_nCurrentStorage;
    double m_nTotalCash;
    std::list<VIrus> m_lViruses;
};


#endif //HACKERSIM_BACKPACK_H
