#include "Character.h"

void Character::CreateCharacter(const std::string& n, int l, const std::string& t) {
    name = n;
    level = l;
    type = t;
    std::cout << "Character Created: " << name << ", Level: " << level << ", Type: " << type << std::endl;
}

void Character::Say() const {
    std::cout << "I am a mysterious character." << std::endl;
}

void Character::SetLevel(int l) {
    level = l;
}

void Character::SetLevel(int base, int bonus) {
    level = base + bonus;
}
