#include "Hamster.h"

Hamster::Hamster(const std::string& hamsterName) : Animal(hamsterName) {}

void Hamster::Type() const {
    cout << "Type: Hamster" << endl;
}

void Hamster::Sound() const {
    cout << "Hamster sound: Squeak!" << endl;
}

void Hamster::Show() const {
    cout << "Name: " << GetName() << endl;
}

string Hamster::GetName() const {
    return name;
}
