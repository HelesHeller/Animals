#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.h"

class Dog : public Animal {
public:
    Dog(const std::string& dogName);

    void Sound() const;
    void Show() const;
    void Type() const;
};

#endif
