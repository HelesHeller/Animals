#ifndef PARROT_H
#define PARROT_H

#include <iostream>
#include "Animal.h"

class parrot : public Animal {
public:
    parrot(const string& parrotName);

    void Sound() const;
    void Show() const;
    void Type() const;
    string GetName() const;
};

#endif
