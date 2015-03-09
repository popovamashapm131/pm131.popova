#ifndef RMAX_HPP
#define RMAX_HPP
#include<string>
#include<sstream>
using namespace std;
class Rmax
{
public:
    Rmax(double value);
	Rmax(Rmax& other);
	Rmax();
	double value;
	string toString();
	static Rmax zero;
	static Rmax unit;
    bool Rmax::operator ==(Rmax& other);
	Rmax Rmax::operator + (Rmax& other);
	Rmax Rmax::operator * (Rmax& other);
    Rmax& Rmax::operator =(Rmax& other);// & - ссылка
	
};

#endif
