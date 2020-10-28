//
// Created by thepu on 10/27/2020.
//

#ifndef HACKERSIM_PLAYER_H
#define HACKERSIM_PLAYER_H
#include "cmake-build-debug/Backpack.h"
#include "list"

class Player {
public:
    Player(Backpack, std::string, std::string, float, std::list<VIrus>, float, int);
    void createNewProfile();
    void setBackpack(Backpack&);
    Backpack& getBackpack();
    void setName(std::string&);
    std::string& getName();
    void setSaveVersion();
    void addMoney(float fCash);
    void setMoney(float fCash);
    bool createAndAddVirus(VIrus);
    bool addVirus(VIrus);
    std::list<VIrus> getListOfAuthoredViruses();
    


private:
    Backpack m_bBackpack;
    const std::string m_sName;
    std::string m_sSaveVersion;
    float m_fUserXp;
    std::list<VIrus> m_lAuthoredVirus;
    float m_fEnergy;
    int m_nCurrentDay;
    int m_nMaxDay;
    int m_RegionCode;
    // save idea?  TODO
};


#endif //HACKERSIM_PLAYER_H
