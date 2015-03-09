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
<<<<<<< HEAD
    bool Rmax::operator ==(Rmax& other);
	Rmax Rmax::operator + (Rmax& other);
	Rmax Rmax::operator * (Rmax& other);
    Rmax& Rmax::operator =(Rmax& other);
=======
    Rmax& Rmax::operator =(Rmax& other);// & - ссылка
>>>>>>> 0984f915b529cb865cb643961fc2bec4524bed7a
	
};

#endif
