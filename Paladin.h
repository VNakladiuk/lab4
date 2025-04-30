#ifndef PALADIN_H
#define PALADIN_H

#include "Warrior.h"

class Paladin : public Warrior {
private:
    string holySymbol;

public:
    Paladin(const string& symbol);
    void Say() const override;
};
#endif