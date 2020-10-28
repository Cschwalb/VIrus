//
// Created by thepu on 10/26/2020.
//

#include "VIrus.h"

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
    return this->m_dCost;
}

void VIrus::setCost(double dCost) {
    this->m_dCost = dCost;
}

void VIrus::setComplexity(float complex) {
    this->m_fComplexity = complex;
}

float VIrus::getComplexity() {
    return this->m_fComplexity;
}

VIrus::VIrus(std::string sName, std::string sDesc, double dCost, float complexity) {
    this->m_sName = sName;
    this->m_sDescripton = sDesc;
    this->m_dCost = dCost;
    this->m_fComplexity = complexity;
}

VIrus::VIrus() {
    this->m_sName = "rootkit v1.0";
    this->m_sDescripton = "very basic rootkit with low complexity ranking";
    this->m_fComplexity = 1.0;
    this->m_dCost = 100.00;
}
