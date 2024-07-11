#include<iostream>
#include"Point.h"
using namespace std;

Point::Point()
{
    x=0;y=0;
}

Point::Point(int a, int b)
{
    x=a;
    y=b;
}
void Point::display()
{
   cout<<"\n point ("<<x<<", "<<y<<" )";
}
