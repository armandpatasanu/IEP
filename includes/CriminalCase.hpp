#pragma once
#include <iostream>
#include "Case.hpp"

class CriminalCase : public Case
{
private:
    std::string criminalName_;
    std::string victimName_;
public:
    CriminalCase() = default;
    CriminalCase(const CriminalCase& c);
    CriminalCase(std::string name, int nr, Investigator* inv, std::string n1, std::string n2);
    void showCase();
    CriminalCase& operator=(const CriminalCase& c);
};
