

#include<iostream>
#include<string.h>
#include"Triangle.h"
using namespace std;

Triangle::Triangle()
{
    base=0;
    height=0;
}

Triangle::Triangle(char* nm,int b, int h):Shape(nm)
{
   base=b;
   height=h;
}
Triangle::~Triangle()
{
    cout<<"\n Triangle Destruction called.";
}

float Triangle::area()
{
    return (base*height)/2;
}
