#pragma once
#include <iostream>
#include "Case.hpp"
#include <mutex>

class LockedCase
{
    Case* caseToLock_;

public:
    LockedCase(const LockedCase&) = delete;
    LockedCase& operator=(const LockedCase&) = delete;
    LockedCase(Case* c);
    ~LockedCase();

};