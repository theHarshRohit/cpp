

#include<iostream>
#include<string>
#include"Square.h"
using namespace std;

Square::Square()
{
    side=0;

}

Square::Square(char* nm,int b):Shape(nm)
{
   side=b;

}
Square::~Square()
{
    cout<<"\n Square Destruction called.";
}

float Square::area()
{
    return side*side;
}
