#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.h"

class Dog : public Animal {
public:
    Dog();

    void speak();
};

#endif