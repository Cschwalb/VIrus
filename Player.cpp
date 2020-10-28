//
// Created by thepu on 10/27/2020.
//

#include "Player.h"
#include "string"
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

void Player::createNewProfile() {

}

void Player::setBackpack(Backpack &) {

}

Backpack &Player::getBackpack() {
    return this->m_bBackpack;
}

void Player::setName(std::string &) {

}

std::string &Player::getName() {
    return this->m_sName;
}

void Player::setSaveVersion() {

}

void Player::addMoney(float fCash) {

}

void Player::setMoney(float fCash) {

}

bool Player::createAndAddVirus(VIrus) {
    return false;
}

bool Player::addVirus(VIrus) {
    return false;
}

std::list<VIrus> Player::getListOfAuthoredViruses() {
    return std::list<VIrus>();
}

void Player::setEnergy() {

}

float Player::getEnergy() {
    return 0;
}

void Player::setDay(int nCurrentDay) {

}

int Player::getDay() {
    return 0;
}

void Player::addDay() {

}

float Player::getRegionHeat() {
    return 0;
}

void Player::setRegionHeat(float) {

}

