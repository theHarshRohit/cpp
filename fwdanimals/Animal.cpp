#include<iostream>
#include<string.h>
#include"Animal.h"
using namespace std;

Animal::Animal()
{
    cout<<"\n Animal Default Constructor called..";
    name = new char[10];
    strcpy(name,"unknown");
    age = 0;
}
Animal::Animal(char *n,int a)
{
    cout<<"\n Animal Parametrized Constructor called..";
    name = new char[strlen(n)+1];
    strcpy(name,n);
    age = a;
}
Animal::~Animal()
{
    cout<<"\n Animal Destructor called..";
}
void Animal::talk()
{
 cout<<"\n Animal talk called..";
}
char* Animal::getName()
{
    return name;
}
int Animal::getAge()
{
    return age;
}
void Animal::setName(char *c)
{
    name = c;
}
void Animal::setAge(int a)
{
    age = a;
}
