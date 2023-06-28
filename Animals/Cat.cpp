#include "Cat.h"


Cat::Cat(const string& catName) : Animal(catName) {}

void Cat::Type() const {
    cout << "Type: Cat" << endl;
}

void Cat::Sound() const {
    cout << "Cat sound: Meow!" << endl;
}

void Cat::Show() const {
    cout << "Name: " << GetName() << endl;
}

string Cat::GetName() const {
    return name;
}
