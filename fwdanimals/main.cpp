#include<iostream>
#include<string.h>
#include"Animal.h"
#include"Dog.h"
#include"Cat.h"
using namespace std;

int main()
{
	//Animal *animal = new Animal();  //This line should give compile time error "Cant create object of abstract class"

	//My Dog name is Boss & age is 15 months
	Animal *dogPtr = new Dog("Boss", 15);
	dogPtr->talk(); //Every animal has unique way of sound
	delete dogPtr;

	//My cat name is Puppy & she is 3 month old and it is-a Animal
	Cat c1("Puppy", 3);
	Cat c2("Puppy", 4);

	//Use strcmp function to to compare names of 2 Cat
	if(c1 == c2)
		cout<<"\n Both are same!";
	else
		cout<<"\n Both are different!"<<endl;

	c1.talk();
}
