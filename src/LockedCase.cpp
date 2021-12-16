#include <mutex>
#include "../includes/LockedCase.hpp"

void lock(Case* c)
{
    c->setIsLocked(true);
    std::cout<<"Case is now being placed under investigation and can't be disturbed"<<std::endl;
}

void unlock(Case* c)
{
    c->setIsLocked(false);
    std::cout<<"The case is now in an investigation break and new clues can be added"<<std::endl;
}

LockedCase::LockedCase(Case* c) : caseToLock_(c)
{
    lock(caseToLock_);
}

LockedCase::~LockedCase()
{
    unlock(caseToLock_);
}