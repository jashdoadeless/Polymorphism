// Polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void polymorph();
void polymorph(int number);
void polymorph(char character);
void polymorph(bool boolean);
void polymorph(double largenumber);
void polymorph(int number, int numberdos);
void polymorph(string string);


int main()
{
	//The following function calls are all the same name, but go to different implementations (adhoc)
	polymorph(1);
	polymorph("y");
	polymorph(true);
	polymorph(37.2456789);
	polymorph(1, 2);
	polymorph("this is a string");
	polymorph();
	//This finishes the end of the function calls that are ad hoc polymorphic.

	//The following is an example of coercion polymorphism
	//Which is when the compiler implicitly converts variables, rather than the programmer explicitly doing it.
	//For example;

	int number1 = 5;
	float number2 = 3.14159;

	cout << number1 + number2 << endl;

	system("PAUSE");
    return 0;
}

void polymorph()
{
	cout << "nothing\n";
}

void polymorph(int number)
{
	cout << "Integer: "<<number<<"\n";
}

void polymorph(char character)
{
	cout << "Char: "<<character<<"\n";
}

void polymorph(bool boolean)
{
	cout << "bool: "<<boolean<<"\n";
}

void polymorph(double largenumber)
{
	cout << "double: "<< std::setprecision(4) << largenumber <<"\n";
}

void polymorph(int number, int numbertwo)
{
	cout << "two ints: "<<number<<" and "<<numbertwo<<"\n";
}

void polymorph(string string)
{
	cout << "a string: "<<string<<"\n";
}
