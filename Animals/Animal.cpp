#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(const std::string& animalName) : name(animalName) {}

void Animal::Sound() const {
    cout << "Unknown animal sound!" << endl;
}

void Animal::Show() const {
    cout << "Animal name: " << name << endl;
}




string Animal::GetName() const {
    return name;
}




