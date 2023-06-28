#ifndef CAT_H
#define CAT_H
#include<iostream>
#include"Animal.h"

using namespace std;

class Cat : public Animal {
public:
    Cat(const string& catName);

    void Type() const;
    void Sound() const ;
    void Show() const ;
    string GetName() const;
};

#endif
