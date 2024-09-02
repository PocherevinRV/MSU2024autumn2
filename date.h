#ifndef DATE_H
#define DATE_H

#include <iostream>
//#include <ostream>
class Date
{
private:
	int m_day = 1;
	int m_month = 1;
	int m_year = 1;
public:
	// default constructor
	Date();
	// constructor
	Date(int day, int month, int year);
	// copy constructor
	Date(const Date &b);
	// destructor
	~Date();
	// operator +
	Date operator+(const Date &date);
	// output operator
	friend std::ostream& operator<<(std::ostream &out, const Date& date);
};




#endif