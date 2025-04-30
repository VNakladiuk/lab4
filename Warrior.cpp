#include "Warrior.h"
#include <iostream>

Warrior::Warrior() {
    CreateCharacter("Thorfin", 5, "Warrior");
}

void Warrior::Say() const {
    cout << "For honor and glory!" << endl;
}