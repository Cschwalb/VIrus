//
// Created by thepu on 10/27/2020.
//

#ifndef HACKERSIM_PLAYER_H
#define HACKERSIM_PLAYER_H
#include "cmake-build-debug/Backpack.h"
#include "list"

class Player {
public:
    Player(Backpack, std::string,
           std::string,
           float,
           float,
           std::list<VIrus>,
           int,
           float);
    Player();
    void createNewProfile();
    void setBackpack(Backpack&);
    Backpack& getBackpack();
    void setName(std::string&);
    std::string& getName();
    void setSaveVersion(std::string&);
    void addMoney(float fCash);
    void setMoney(float fCash);
    bool createAndAddVirus(VIrus);
    bool addVirus(VIrus);
    std::list<VIrus> getListOfAuthoredViruses();
    void setEnergy();
    float getEnergy();
    void setDay(int nCurrentDay);
    int getDay();
    void addDay();
    float getRegionHeat();
    void setRegionHeat(float);
    bool developVIrus(VIrus);
    const std::string toString();
    bool makeCopyOfVirus(VIrus&);
    bool virusExistsInAuthored(VIrus&);
    Backpack Instance();



private:
    Backpack m_bBackpack;
    std::string m_sName;
    std::string m_sSaveVersion;
    float m_fUserXp;
    std::list<VIrus> m_lAuthoredVirus;
    float m_fEnergy;
    int m_nCurrentDay;
    int m_nMaxDay;
    float m_RegionHeat;
    // save idea?  TODO
};


#endif //HACKERSIM_PLAYER_H
