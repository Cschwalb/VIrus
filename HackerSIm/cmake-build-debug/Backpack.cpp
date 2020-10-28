//
// Created by thepu on 10/26/2020.
//

#include "Backpack.h"
#include "string"

/*      bool addItem(VIrus); // need to add a virus
    bool takeItem(VIrus);
    double getCash();
    void addCash(double dCash);
    const static int countVirus(std::string&);
 */

int Backpack::countVirus(std::basic_string<char> sCountVirus){
    std::list<VIrus>::iterator it;
    int nCount = 0;
    for(it = m_lViruses.begin(); it != m_lViruses.end(); it++){
        if(it->getName().compare(sCountVirus.c_str()) == 0)
        {
            nCount++;
        }
    }
    return nCount;
}

bool Backpack::addItem(VIrus vVirus) {
    if(vVirus.getName().empty() == true) {
        return false;
    }
    else {
        this->m_lViruses.push_back(vVirus);
        return true;
    }
}

bool Backpack::takeItem(VIrus vVir) {
    if(Backpack::countVirus(vVir.getName()) > 0 ){
        // optimize.
        std::list<VIrus>::iterator it;
        for(it = m_lViruses.begin(); it != m_lViruses.end(); it++){
            m_lViruses.erase(it);
            break; // only one item pls.
        }
    }
}

double Backpack::getCash() {
    return this->m_nTotalCash;
}

void Backpack::addCash(double dCash) {
    this->m_nTotalCash += dCash;
}

Backpack::Backpack() {
    this->m_nTotalCash = 750; // start with this
    this->m_nCurrentStorage = 0;
    this->m_nMaxStorage = 256;
    this->m_lViruses.push_back(VIrus());

}
