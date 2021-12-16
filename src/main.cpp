#include "../includes/CriminalCase.hpp"
#include "../includes/FamilyCase.hpp"
#include "../includes/LockedCase.hpp"
#include <memory>

int main()
{
    std::shared_ptr<Investigator> inv(new Investigator("Armand", 15));
    std::shared_ptr<Investigator> inv1(new Investigator("Daniela", 22));
    Investigator inv3("Alecs", 38);

    std::unique_ptr<Case> uniqueCase1(new CriminalCase("Williams - Forest",2, inv, "Maxwell Williams", "Jane Doe"));
    //uniqueCase1->showCase();
    std::cout<<inv.use_count()<<std::endl;
    std::unique_ptr<Case> uniqueCase2(new FamilyCase("Money Laundering",6, inv, 4, "Jackson"));
    //uniqueCase2->showCase();
    std::cout<<inv.use_count()<<std::endl;

    uniqueCase1->checkCase();
    std::unique_ptr<Case> uniqueCase3 = move(uniqueCase1);
    uniqueCase1->checkCase();

    std::cout<<"MUTEX PART  --------------------"<<std::endl;
    CriminalCase* caseToLock = new CriminalCase("Williams - Forest",2, inv1, "Maxwell Williams", "Jane Doe");
    caseToLock->showCase();
    LockedCase* cableLock = new LockedCase(caseToLock);
    caseToLock->isCaseAvailable();
    std::cout<<std::endl;
    delete cableLock;
    caseToLock->isCaseAvailable();  

    return 0;
}