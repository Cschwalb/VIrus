//
// Created by thepu on 10/26/2020.
//

#ifndef HACKERSIM_VIRUS_H
#define HACKERSIM_VIRUS_H
#include "string"

class VIrus {
public:
    VIrus(std::string sName, std::string sDesc, double dCost, float complexity);
    VIrus(); // generic one
    std::string getName()&;
    std::string getDescription()&;
    void setName(std::string&);
    void setDescription(std::string&);
    double getCost();
    void setCost(double dCost);
    float getComplexity();
    void setComplexity(float);
    bool attack();
    bool defense();
private:
    std::string m_sName;
    std::string m_sDescripton;
    double m_dCost;
    float m_fComplexity;

};


#endif //HACKERSIM_VIRUS_H
