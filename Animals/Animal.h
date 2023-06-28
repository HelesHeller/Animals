#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(const string& animalName);

    void Sound() const;
    void Show() const;
    virtual void Type() const = 0;
    string GetName() const;
};

#endif
