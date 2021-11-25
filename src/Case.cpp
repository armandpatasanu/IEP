#include "../includes/Case.hpp"

Case::Case(std::string name, int nr, Investigator* inv): caseName_(name), numberOfVictims_(nr), inv_(inv){}

void Case::showCase()
{
    this->inv_->showDetails();
    std::cout<<"Case name: "<<caseName_<<std::endl;
    std::cout<<"People involved: "<<numberOfVictims_<<std::endl;
}

Case::Case(const Case& c)
{
    inv_ = new Investigator(*c.inv_);
    this->caseName_ = c.caseName_;
    this->numberOfVictims_ = c.numberOfVictims_;
}


Case& Case::operator=(const Case& c)
{
    if(this == &c) 
        return *this;
    
    delete inv_;
    
    inv_ = new Investigator(*c.inv_);
    this->caseName_ = c.caseName_;
    this->numberOfVictims_ = c.numberOfVictims_;
    
    return *this;
}
