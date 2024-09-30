#include "vect.h" 
Vect::Vect()
{
	len = 0;
	data = nullptr;	
	std::cout << "Default constructor for " << *this << std::endl;
}
Vect::Vect(int num)
{
	len = num;
	data = new int[len];
	for (int k = 0; k < len; ++k) data[k] = rand() % 1000;
	std::cout << "Random constructor with len = " << len << "\n" << *this << std::endl;
}
Vect::~Vect() 
{
	std::cout << "Destructor for " << *this << std::endl;
	delete []data;
}
Vect Vect::operator+(const Vect &vect)
{
	std::cout << "Operator +" << std::endl;	
	Vect result(len);
	for (int k = 0; k < len; ++k) 
		result.data[k] = data[k] + vect.data[k];
	return result;
}
Vect::Vect(const Vect &vect) : Vect(vect.len)
{
	for (int k = 0; k < len; ++k) data[k] = vect.data[k];
	std::cout << "Copy constructor for " << *this << std::endl;	
}
Vect::Vect(Vect &&vect) : len(vect.len), data(vect.data)
{
	//data = vect.data;
	vect.len = 0;
	vect.data = nullptr;
	std::cout << "Move constructor for " << *this << std::endl;	
}
Vect& Vect::operator= (const Vect &vect)
{
	std::cout << "Copy assignment operator" << std::endl;
	if (this == &vect) return *this;
	delete []data;
	len = vect.len;
	data = new int[len];
	for (int k = 0; k < len; ++k) data[k] = vect.data[k];
	return *this;
}
Vect& Vect::operator= (Vect &&vect)
{
	std::cout << "Move assignment operator" << std::endl;
	//if (this == &vect) return *this;
	len = vect.len;
	delete []data;
	data = vect.data;
	vect.len = 0;
	vect.data = nullptr;
	return *this;
}
std::ostream& operator<<(std::ostream &out, const Vect& vect)
{
	out << "(";
	for (int k = 0; k < vect.len; ++k)
		out << vect.data[k] << ", ";
	out << ")" << std::endl;
	return out;
}
