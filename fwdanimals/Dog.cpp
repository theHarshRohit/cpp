#include<iostream>
#include"Dog.h"
#include<string.h>
using namespace std;

Dog::Dog()
{
    cout<<"\n Dog Default Constructor called..";
}
Dog::Dog(char *n,int a)
{
    cout<<"\n Dog Parametrized Constructor called..";
    name = new char[strlen(n)+1];
    strcpy(name,n);
    age = a;
}
Dog::~Dog()
{
    cout<<"\n Dog Destructor called..";
}
void Dog::talk()
{
 cout<<"\n Dog talk called..";
}
