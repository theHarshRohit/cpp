#include<iostream>
#include"Circle.h"
#include"Point.h"
#include<string.h>
using namespace std;

Circle::Circle():p()
{

    r=0;
}

Circle::Circle(char *nm,int x,int y,int rr):p(x,y),Shape(nm)
{
    r=rr;
}
Circle::~Circle()
{
    cout<<"\n Circle destructor called.";
}

float Circle::area()
{
    return 3.14*r*r;
}

