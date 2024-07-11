#include<iostream>
#include"Shape.h"
#include<string.h>
using namespace std;

Shape::Shape()
{
    color = new char[5];
    strcpy(color,"pink");
}
Shape::Shape(char *c)
{
    color= new char[strlen(c)+1];
    strcpy(color,c);
}

Shape::~Shape()
{
    cout<<"\n Shape destructor called.";
    delete color;
}

char * Shape::getColor()
{
    return color;
}

void Shape::setColor(char* c)
{
    color= new char[strlen(c)+1];
    strcpy(color,c);
}
