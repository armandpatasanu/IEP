#include "../includes/FamilyCase.hpp"

FamilyCase::FamilyCase(std::string name, 
                           int nr, 
                           Investigator* inv, 
                           int n, 
                           std::string fn) : Case(name, nr, inv), caseType_(n), familyName_(fn){}

FamilyCase::FamilyCase(const FamilyCase& c) : Case(c)
{
    this->caseType_ = c.caseType_;
    this->familyName_ = c.familyName_;
}

FamilyCase& FamilyCase::operator=(const FamilyCase& c)
{
    if(this == &c)
        return *this;
    
    Case::operator=(c);
    this->caseType_ = c.caseType_;
    this->familyName_ = c.familyName_;

    return *this;
}

void FamilyCase::showCase()
{
    Case::showCase();
    std::cout<<"{Casetype, Family's name}: "<<"{"<<caseType_<<" , "<<familyName_<<"}"<<std::endl;
}