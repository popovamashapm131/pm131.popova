#include "Rmax.h"
#include <limits>
using namespace std;
Rmax Rmax::zero(-numeric_limits<double>::infinity());
Rmax Rmax::unit=0;
Rmax::Rmax()
:value(-numeric_limits<double>::infinity())
{
	
}
