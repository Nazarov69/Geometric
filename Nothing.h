#pragma once
#include <iostream>
using namespace std;

class Nothing {
public:
	virtual double S() = 0;
	virtual double V() = 0;
	virtual ostream& Cout(ostream& os) = 0;
	friend ostream& operator<< (ostream& os,  Nothing& a) {
		return a.Cout(os);
	}
	~Nothing() {}
};
