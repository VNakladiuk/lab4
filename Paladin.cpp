#include "Paladin.h"
#include <iostream>

Paladin::Paladin(const string& symbol) {
    holySymbol = symbol;
    CreateCharacter("Uther", 7, "Paladin");
}

void Paladin::Say() const {
    cout << "By the light of " << holySymbol << "!" << endl;
}
