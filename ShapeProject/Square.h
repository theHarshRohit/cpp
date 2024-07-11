
#include"Shape.h"
#ifndef SQUARE__H_
#define SQUARE__H_
class Square : public Shape
{
    int side;

public:
    Square();
    Square(char* nm,int);
    ~Square();
    float area();
};
#endif // SQUARE__H_
