#include<iostream>
#include<string.h>
#include"Cat.h"
using namespace std;

Cat::Cat()
{
    cout<<"\n Cat Default constructor is called..";
}
Cat::Cat(char *c,int a) : Animal(c,a)
{
    cout<<"\n Cat Parametrized is called..";
}
Cat::~Cat()
{
    cout<<"\n Cat Destructor called..";
}
void Cat::talk()
{
    cout<<"\n Cat Talk called..";
}
bool Cat::operator==(const Cat& c)
{
  return strcmp(this->name,c.name)==0;
}

