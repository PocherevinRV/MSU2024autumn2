#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <ostream>
class Vect
{
private:
	int len;
	int* data;
public:
	// default constructor
	Vect();
	// constructor
	Vect(int num);
	// destructor
	~Vect();
	Vect operator+(const Vect &vect);
	// copy constructor
	Vect(const Vect &b);
	// move constructor
	Vect(Vect &&b);
	// assignment operator
	Vect& operator= (const Vect &vect);
	// move assignment operator
	Vect& operator= (Vect &&vect);
	// output operator
	friend std::ostream& operator<<(std::ostream &out, const Vect& vect);
};




#endif