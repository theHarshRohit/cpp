#include<iostream>
#ifndef ANIMAL__H_
#define ANIMAL__H_
class Animal
{
protected:
    char *name;
    int age;
public:
    Animal();
    Animal(char *,int);
    virtual ~Animal();
    virtual void talk()=0;
    char *getName();
    int getAge();
    void setName(char *);
    void setAge(int);
};
#endif // ANIMAL__H_

