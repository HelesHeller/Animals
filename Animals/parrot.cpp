#include "parrot.h"
#include "Animal.h"

parrot::parrot(const string& parrotName) : Animal(parrotName) {}

void parrot::Type() const {
    cout << "Type: Parrot" << endl;
}

void parrot::Sound() const {
    cout << "Parrot sound: Squawk!" << endl;
}

void parrot::Show() const {
    cout << "Name: " << GetName() << endl;
}

string parrot::GetName() const {
    return name;
}
