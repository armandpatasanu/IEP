#pragma once

#include <iostream>
#include "Case.hpp"

class FamilyCase : public Case
{
private:
    int caseType_;
    std::string familyName_;
public:
    FamilyCase() = default;
    FamilyCase(const FamilyCase& c);
    FamilyCase(std::string name, int nr, Investigator* inv, int t, std::string fn);
    void showCase();
    FamilyCase& operator=(const FamilyCase& c);
};
