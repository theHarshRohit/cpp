                        #include"Shape.h"
#include"Point.h"
#ifndef CIRCLE__H_
#define CIRCLE__H_

class Circle : public Shape
{
    Point p;
    int r;
public:
    Circle();
    Circle(char *,int,int,int);
    ~Circle();
    float area();
};


#endif // CIRCLE__H_
