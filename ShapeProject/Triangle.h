


#include"Shape.h"
#ifndef TRIANGLE__H_
#define TRIANGLE__H_
class Triangle : public Shape
{
    int base;
    int height;
public:
    Triangle();
    Triangle(char* nm,int ,int);
    ~Triangle();
    float area();
};
#endif // TRIANGLE__H_
