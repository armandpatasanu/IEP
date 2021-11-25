#include "../includes/CriminalCase.hpp"

CriminalCase::CriminalCase(std::string name, 
                           int nr, 
                           Investigator* inv, 
                           std::string n, 
                           std::string n1) : Case(name, nr, inv), criminalName_(n), victimName_(n1){}

CriminalCase::CriminalCase(const CriminalCase& c) : Case(c)
{
    this->criminalName_ = c.criminalName_;
    this->victimName_ = c.victimName_;
}

CriminalCase& CriminalCase::operator=(const CriminalCase& c)
{
    if(this == &c)
        return *this;
    
    Case::operator=(c);
    this->criminalName_ = c.criminalName_;
    this->victimName_ = c.victimName_;

    return *this;
}

void CriminalCase::showCase()
{
    Case::showCase();
    std::cout<<"{Criminal , Victim}: "<<"{"<<criminalName_<<" , "<<victimName_<<"}"<<std::endl<<std::endl;
}