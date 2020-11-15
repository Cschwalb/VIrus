//
// Created by thepu on 10/27/2020.
//

#include <iostream>
#include "Player.h"
#include "string"
#include "utility.h"
#include "sstream"

Player::Player(Backpack b,
               std::string name,
               std::string save,
               float cash,
               float energy,
               std::list<VIrus> lAuthor,
               int days,
               float regionHeat) {
    this->m_bBackpack = b;
    this->m_sName =name;
    this->m_sSaveVersion = save;
    this->m_bBackpack.addCash(cash);
    this->m_fEnergy = energy;
    this->m_lAuthoredVirus = lAuthor;
    this->m_nMaxDay = days;
    this->m_nCurrentDay = 0;
    this->m_RegionHeat = regionHeat;
}

Player::Player(){
    this->m_bBackpack = Backpack();
    this->m_sName = "User";
    this->m_sSaveVersion = "1";
    this->m_bBackpack.addCash(1000);
    this->m_fEnergy = 100;
    this->m_lAuthoredVirus = std::list<VIrus>();
    this->m_nCurrentDay = 0;
    this->m_RegionHeat = 10;
    this->m_nMaxDay = 90;
    std::cout<<"Max day of 90 set!" << std::endl;
}

void Player::createNewProfile() {
    Player();
}

void Player::setBackpack(Backpack &b) {
    this->m_bBackpack = b;
}

Backpack &Player::getBackpack() {
    return this->m_bBackpack;
}

void Player::setName(std::string & name) {
    this->m_sName = name;
}

std::string &Player::getName() {
    return this->m_sName;
}

void Player::setSaveVersion(std::string& s) {
    this->m_sSaveVersion = s;
}

void Player::addMoney(float fCash) {
    this->m_bBackpack.addCash(fCash);
}

void Player::setMoney(float fCash) {
    this->m_bBackpack.addCash(fCash); // TODO need a new addcash w/ start at 0.
}

bool Player::createAndAddVirus(VIrus) {
    return false;
}

bool Player::addVirus(VIrus vir) {
    int nCount = this->m_lAuthoredVirus.size();
    this->m_lAuthoredVirus.push_back(vir);
    this->m_bBackpack.addItem(vir);
    if(nCount < this->m_lAuthoredVirus.size())
    {
        std::cout<<"true add"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"false addvirus"<<std::endl;
        return false;
    }
}

std::list<VIrus> Player::getListOfAuthoredViruses() {
    return this->m_lAuthoredVirus;
}

void Player::setEnergy() {
    this->m_fEnergy = m_fEnergy;
}

float Player::getEnergy() {
    return this->m_fEnergy;
}

void Player::setDay(int nCurrentDay) {
    this->m_nCurrentDay = nCurrentDay;
}

int Player::getDay() {
    return this->m_nCurrentDay;
}

void Player::addDay() {
    this->m_nCurrentDay += 1;
}

float Player::getRegionHeat() {

    return this->m_RegionHeat;
}

void Player::setRegionHeat(float f) {
    this->m_RegionHeat = f;
}

bool Player::developVIrus(VIrus vIrus) {

    if(this->m_fEnergy > vIrus.getComplexity() * 20)
    {
        std::cout<<"[+] starting development of: " << vIrus.getName() << std::endl;
        this->m_lAuthoredVirus.emplace_back(vIrus);
        this->m_bBackpack.addItem(vIrus);
        return true;
    }
    else
    {
        std::cout<<"[+!!--] cannot develop " << vIrus.getName() << std::endl;
        std::cout<<"[+!!--] Energy: " << getEnergy() << std::endl;
        return false;
    }
}

const std::string Player::toString() {
    std::stringstream sPlayerString;
    sPlayerString << "Name ";
    sPlayerString<<getName() << getName();
    sPlayerString << "Cash ";
    sPlayerString << this->m_bBackpack.getCash();
    sPlayerString<<"\n";
    sPlayerString << "\nVirus List:\\=======\\\n";
    for (std::list<VIrus>::iterator it = this->m_lAuthoredVirus.begin(); it != this->m_lAuthoredVirus.end(); ++it)
    {
        sPlayerString << it->getName();
        sPlayerString <<  "\n";
    }
    sPlayerString <<  "=============\n";
    sPlayerString << "Current Day Count ";
    sPlayerString << getDay();

    sPlayerString << "\nHeat ";
    sPlayerString << getRegionHeat();
    return sPlayerString.str();
}

bool Player::virusExistsInAuthored(VIrus& virus) {
    for(auto it = this->m_lAuthoredVirus.begin(); it != this->m_lAuthoredVirus.end(); it++){
        if(it->getName().compare(virus.getName()) == 0)
            return true;
    }
    return false;
}

Backpack Player::Instance() {
    if(this == nullptr)
        this->m_bBackpack = Backpack();
    return this->m_bBackpack;
}

