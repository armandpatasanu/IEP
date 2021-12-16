#include "../includes/Case.hpp"

Case::Case(std::string name, int nr, std::shared_ptr<Investigator> inv): caseName_(name), numberOfVictims_(nr), inv_(inv), underInvest(false){}

void Case::showCase()
{
    this->inv_->showDetails();
    std::cout<<"Case name: "<<caseName_<<std::endl;
    std::cout<<"People involved: "<<numberOfVictims_<<std::endl;
}

Case::Case(const Case& c)
{
    std::shared_ptr<Investigator> inv_(c.inv_);
    this->caseName_ = c.caseName_;
    this->numberOfVictims_ = c.numberOfVictims_;
}


Case& Case::operator=(const Case& c)
{
    if(this == &c) 
        return *this;
    
    std::shared_ptr<Investigator> inv_(c.inv_);
    this->caseName_ = c.caseName_;
    this->numberOfVictims_ = c.numberOfVictims_;
    
    return *this;
}

void Case::setIsLocked(bool value)
{
    this->underInvest = value;
}

void Case::isCaseAvailable()
{
    if(this->underInvest){
            std::cout<<"-> [CASE STATUS]: LOCKED <-"<<std::endl;
        }else{
            std::cout<<"-> [CASE STATUS]: UNLOCKED <-"<<std::endl;
        }
}

bool Case::askForCase()
{
    return this->underInvest;
}

void Case::checkCase()
{
    if(this)
    {
        this->showCase();
    }
    else
        std::cout<<"Case is bye!"<<std::endl<<std::endl;
}