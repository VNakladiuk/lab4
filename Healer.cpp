#include "Healer.h"
#include <iostream>

Healer::Healer(const string& symbol) {
    holySymbol = symbol;
    CreateCharacter("Niger", 7, "Healer");
}

void Healer::Say() const {
    cout << "By the light of " << holySymbol << "!" << endl;
}
