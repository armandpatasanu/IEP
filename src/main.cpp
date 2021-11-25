#include "../includes/CriminalCase.hpp"
#include "../includes/FamilyCase.hpp"

int main()
{
    Investigator* inv1 = new Investigator("Armand", 15);
    Investigator* inv2 = new Investigator("Mihai", 21);
    Investigator inv3("Alecs", 38);

    CriminalCase c1("Williams - Forest",2, inv1, "Maxwell Williams", "Jane Doe");
    FamilyCase c2("Money Laundering",6, &inv3, 4, "Jackson");

    CriminalCase c3 = c1;
    c3 = c3;
    c3.showCase();

    CriminalCase c4 = c3;
    c4.showCase();

    c2.showCase();

    return 0;
}