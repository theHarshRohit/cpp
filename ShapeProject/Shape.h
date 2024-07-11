#ifndef SHAPE__H_
#define SHAPE__H_

class Shape
{
protected:
    char *color;
public:
    Shape();
    Shape(char*);
   virtual ~Shape();
    char * getColor();
    void setColor(char *);
    virtual float area()=0;
};

#endif // SHAPE__H_
