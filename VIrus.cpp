//

#include "VIrus.h"
#include "utility.h"
#include "sstream"
//
// Created by thepu on 10/26/2020.
VIrus::VIrus() {
    this->m_sName = "rootkit v1.0";
    this->m_sDescripton = "very basic rootkit with low complexity ranking";
    this->m_fComplexity = 1.0;
    this->m_dCost = 100.00;
    this->m_nJiraStoryPoints = 1;
}

VIrus::VIrus(std::string sName, std::string sDesc, double dCost, float complexity, int nJira) {
    this->m_sName = sName;
    this->m_sDescripton = sDesc;
    this->m_dCost = dCost;
    this->m_fComplexity = complexity;
    this->m_nJiraStoryPoints = nJira;
}

std::string VIrus::getName()& {
    return this->m_sName;
}

std::string VIrus::getDescription()& {
    return this->m_sDescripton;
}

void VIrus::setName(std::string& sName)
{
    this->m_sName = sName;
}

void VIrus::setDescription(std::string &sDesc) {
    this->m_sDescripton = sDesc;
}

double VIrus::getCost(){
    printf("%.2f", this->m_dCost);

    return this->m_dCost;
}

void VIrus::setComplexity(float complexity) {
    this->m_fComplexity = complexity;
}

PriceGenerator::ComplexityPrice VIrus::getComplexity() {
    if(this->m_fComplexity <= 1)
        return PriceGenerator::ComplexityPrice::one;
    if(this->m_fComplexity >= 2 && this->m_fComplexity < 3)
        return PriceGenerator::ComplexityPrice::two;
    if(this->m_fComplexity >= 3 && this->m_fComplexity < 4)
        return PriceGenerator::ComplexityPrice::three;
    if(this->m_fComplexity >= 4 && this->m_fComplexity < 5)
        return PriceGenerator::ComplexityPrice::four;
    if(this->m_fComplexity >= 5 && this->m_fComplexity < 6)
        return PriceGenerator::ComplexityPrice::five;
    if(this->m_fComplexity >= 6 && this->m_fComplexity < 7)
        return PriceGenerator::ComplexityPrice::six;
    if(this->m_fComplexity >= 7 && this->m_fComplexity < 8)
        return PriceGenerator::ComplexityPrice::seven;
    if(this->m_fComplexity >= 8 && this->m_fComplexity < 9)
        return PriceGenerator::ComplexityPrice::eight;
    if(this->m_fComplexity >= 9 && this->m_fComplexity < 10)
        return PriceGenerator::ComplexityPrice::nine;
    return PriceGenerator::ComplexityPrice::ten;

}

bool VIrus::attack() {
    return true;
}

bool VIrus::defense() {
    return true;
}

bool VIrus::decode(float fAttackComplexity) {
    if(fAttackComplexity > (this->m_fComplexity * 2)){
        return true;
    }
    else{// split into days
        return false;
    }
}

std::string VIrus::toString() {
    std::stringstream read;
    read << "Name " << this->m_sName << std::endl;
    read << "Description " << this->m_sDescripton << std::endl;
    read << "Cost " << this->m_dCost << std::endl;
    read << "Complexity " << this->m_fComplexity << std::endl;
    read << "Jira " << this->m_nJiraStoryPoints << std::endl;
    return read.str();
}


