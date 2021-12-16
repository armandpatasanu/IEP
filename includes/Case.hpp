#pragma once
#include<iostream>
#include "Investigator.hpp"
#include <memory>

class Case
{
protected:
    std::string caseName_;
    int numberOfVictims_;
    std::shared_ptr<Investigator> inv_;
    bool underInvest;

public:
    Case() = default;
    Case(std::string name, int nr, std::shared_ptr<Investigator> inv);
    Case& operator=(const Case& c);
    Case(const Case& c);
    void setIsLocked(bool val);
    void isCaseAvailable();
    bool askForCase();
    void checkCase();
    // Case(const Case&) = delete;
    // Case& operator=(const Case&) = delete;

    void showCase();

    
};

