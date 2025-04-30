#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"
#include "Paladin.h"
#include "Healer.h"

int main() {
    Character* c1 = new Warrior();
    Character* c2 = new Mage();
    Character* c3 = new Archer();
    Character* c4 = new Paladin("Justice");
    Character* c5 = new Healer("God");

    c1->Say();
    c2->Say();
    c3->Say();
    c4->Say();
    c5->Say();

    delete c1;
    delete c2;
    delete c3;
    delete c4;

    return 0;
}
