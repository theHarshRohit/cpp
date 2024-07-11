#include<iostream>
#include"Shape.h"
#include"Point.h"
#include"Square.h"
#include"Triangle.h"
#include"Circle.h"

using namespace std;
/*
int main()
{
    Shape *arre[5];
    arre[0]= new Circle("Pink",3,4,5);
    arre[1]= new Triangle("red",5,6);
    arre[2]= new Square("Yellow",6);
    arre[3]= new Triangle("Black",7,8);
    arre[4]= new Circle("Violet",3,4,5);


    for(int i=0;i<5;i++)
    {
       cout<<"\n array "<<i<<" : "<<arre[i]->area();
    }

    for (int i = 0; i < 5; i++)
    {
        delete arre[i];
    }
}
*/

    bool operator==(Circle &c1,Circle &c2)
    {
        return (c1.area()== c2.area())? true: false;
    }


int main()
{
	//This line should give compile time error like "Cant create object of abstract class" as we can't draw Shape.
//	Shape *shape = new Shape();

	//My Triangle's width is 10 & height is 3
	Shape *triangleShape = new Triangle("Red",10, 3);

	//Triangle's area formula is (width * height)/2
	cout<<"\n triangle area : " << triangleShape->area();

	delete triangleShape;

	//My Circle's centre is at 2,2 (x,y) and radius of 3 and it is-a Shape
	Circle c1("Blue",2,2,3);
	Circle c2("Yellow",3,3,8);

	//Please check both circles areas to verify whether they are equal or not
	//Circle's area formula is (3.14 * radius * radius)
	if(c1==c2)
		cout<<"\nBoth circle are of same area"<<endl;
	else
		cout<<"\nBoth circle are of different area"<<endl;

    return 0;
}

