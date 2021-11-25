#pragma once
#include<iostream>
#include "Investigator.hpp"

class Case
{
protected:
    std::string caseName_;
    int numberOfVictims_;
    Investigator* inv_;
public:
    Case() = default;
    Case(std::string name, int nr, Investigator* inv);
    Case& operator=(const Case& c);
    Case(const Case& c);

    void showCase();

    
};

