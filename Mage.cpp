#include "Mage.h"
#include <iostream>

Mage::Mage() {
    CreateCharacter("Gandalf", 10, "Mage");
}

void Mage::Say() const {
    cout << "You shall not pass!" << endl;
}