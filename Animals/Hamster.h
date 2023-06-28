#ifndef HAMSTER_H
#define HAMSTER_H
#include<iostream>
#include "Animal.h"
using namespace std;

class Hamster : public Animal {
public:
    Hamster(const std::string& hamsterName);

    void Type() const ;
    void Sound() const ;
    void Show() const ;
    std::string GetName() const;
};

#endif
