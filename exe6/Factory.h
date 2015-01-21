#ifndef _FACTORY_H_
#define _FACTORY_H_


class Factory
{
	private:
		string name;
	int annual_output;
	public:
		void setOutput(int oupout){ annual_output = oupout; };
	virtual	void print()const = 0;
};


#endif