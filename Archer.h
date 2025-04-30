#ifndef ARCHER_H
#define ARCHER_H

#include "Character.h"

class Archer : public Character {
public:
    Archer();
    void Say() const override;
};

#endif
