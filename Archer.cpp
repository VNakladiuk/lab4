#include "Archer.h"
#include <iostream>

Archer::Archer() {
    CreateCharacter("Legolas", 8, "Archer");
}

void Archer::Say() const {
    cout << "Swift and silent!" << endl;
}
