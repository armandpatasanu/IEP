#include "../includes/Investigator.hpp"

Investigator::Investigator(std::string n, int a): name_(n), age_(a){}

Investigator::Investigator(const Investigator& i)
{
    this->name_ = i.name_;
    this->age_ = i.age_;
}

void Investigator::showDetails()
{
    std::cout<<"----- Case invested by: ["<<this->name_<<" ; "<<this->age_<<"] -----"<<std::endl;
}

