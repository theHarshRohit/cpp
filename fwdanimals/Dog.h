#include<iostream>
#include"Animal.h"
#ifndef DOG__H_
#define DOG__H_
class Dog : public Animal
{
public:
    Dog();
    Dog(char *,int);
    ~Dog();
    void talk();
};
#endif // DOG__H_

