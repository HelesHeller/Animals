#include "Animal.h"
#include <iostream>

Animal::Animal(const string& animalName) : name(animalName) {}

void Animal::Sound() const {
    cout << "Unknown animal sound!" << endl;
}

void Animal::Show() const {
    cout << "Animal name: " << name << endl;
}

string Animal::GetName() const {
    return name;
}

void Animal::Type() const {
    cout << "Unknown animal type!" << endl;
}
