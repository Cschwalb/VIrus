//
// Created by thepu on 10/26/2020.
//

#ifndef HACKERSIM_VIRUS_H
#define HACKERSIM_VIRUS_H
#include "string"

class VIrus {
public:
    VIrus();
    VIrus(std::string sName, std::string sDesc, double dCost, float complexity);
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
    bool decode(float fAttackComplexity);
    inline void addComplexity(float fFl){
        this->m_fComplexity += fFl;
    }

    inline void setJiraPoints(int nPts) {
        this->m_nJiraStoryPoints = nPts;
    }

    inline int getJiraPoints(){
        return this->m_nJiraStoryPoints;
    }

private:
    std::string m_sName;
    std::string m_sDescripton;
    double m_dCost;
    float m_fComplexity;
    int m_nJiraStoryPoints;
};


#endif //HACKERSIM_VIRUS_H
