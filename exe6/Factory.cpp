#include "Factory.h"

ostream& operator<<(ostream& out, const Factory& f)
{
	out << "( " << f.annual_output << ")";
	return out; 
}
