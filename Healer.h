#ifndef HEALER_H
#define HEALER_H

#include "Mage.h"

class Healer : public Mage {
private:
    string holySymbol;

public:
    Healer(const string& symbol);
    void Say() const override;
};
#endif