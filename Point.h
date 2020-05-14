#pragma once
#include "Nothing.h"

template <class T>
class Point : public Nothing {
	T* m;
	int tmp300;
public:
	Point() : m(0), tmp300(0) {}
	Point(T ma, int aa);
	Point(Point& p);
	Point(T* mb, int ab);
	T* Getm();
	int Gettmp300();
	void SetPoint(T* md, int ab);
	bool operator!= (const Point& aa);
	Point& operator= (const Point& aa);
	Point& operator= (const int a);
	double S();
	double V();
	ostream& Cout(ostream& os);
	~Point();
};
