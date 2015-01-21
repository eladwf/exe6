#ifndef _FACTORY_H_
#define _FACTORY_H_
#include <string>
#include <iostream>
using namespace std;

class Factory
{
	private:
	string name;
	int annual_output;
	public:
		Factory(){ name = ""; };
		Factory(string n, int out);
		Factory(const Factory& f);
		void showOutput();
		friend ostream& operator<<(ostream& out, const Factory& f);
		void setOutput(int oupout){ annual_output = oupout; };
	virtual	void print()const = 0;
};


#endif