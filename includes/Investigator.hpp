#pragma once
#include <iostream>

class Investigator
{
private:
    std::string name_;
    int age_;
public:
    Investigator() = default;
    Investigator(const Investigator& i);
    Investigator(std::string n, int a);
    void showDetails();
};
