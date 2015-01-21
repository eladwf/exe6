#ifndef _TVFACTORY_H_
#define _TVFACTORY_H_
#include "Factory.h"
#include <string>
using namespace std;

class TVfactory:public Factory
{
private:
	int fullHD;
	int HDready;
public:
	TVfactory();
	friend ostream& operator<<(ostream& out, const TVfactory& f);
	
};


#endif