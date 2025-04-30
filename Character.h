#pragma once
#include <iostream>
#include <string>
using namespace std;

class Character {
protected:
    std::string name;
    int level;
    std::string type;

public:
    Character() = default;
    virtual ~Character() = default;

    void CreateCharacter(const std::string& n, int l, const std::string& t);
    virtual void Say() const;

    void SetLevel(int l);
    void SetLevel(int base, int bonus); 
};
