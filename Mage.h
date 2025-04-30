#ifndef MAGE_H
#define MAGE_H

#include "Character.h"

class Mage : public Character {
public:
    Mage();
    void Say() const override;
};

#endif
