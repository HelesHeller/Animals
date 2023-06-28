#include "Dog.h"
#include <iostream>

Dog::Dog(const string& dogName) : Animal(dogName) {}

void Dog::Sound() const {
    cout << "Woof woof!" << endl;
}

void Dog::Type() const {
   cout << "Dog breed: Dog" << endl;
}

void Dog::Show() const {
    cout << "Name: " << GetName() << std::endl;
}

