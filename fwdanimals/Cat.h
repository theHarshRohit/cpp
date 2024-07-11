#include<iostream>
#include"Animal.h"
#ifndef CAT__H_
#define CAT__H_
class Cat : public Animal
{
public:
    Cat();
    Cat(char *,int);
    ~Cat();
    void talk();
    bool operator==(const Cat& c);
};
#endif // CAT__H_

