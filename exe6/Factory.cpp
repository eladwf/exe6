#include "Factory.h"

Factory::Factory(string n, int out)
{
	this->name = n;
	this->annual_output = out;
}

Factory::Factory(const Factory &f)
{
	this->annual_output = f.annual_output;
	this->name = f.name;
}

void Factory::showOutput()
{
	cout << this->annual_output;
}

ostream& operator<<(ostream& out, const Factory& f)
{
	out << "( " << f.annual_output << ")";
	return out; 
}

