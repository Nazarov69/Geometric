#pragma once
#include"Point.h"
#include "Line.h"
template<class T>
class Circle :public Point<T> {
	Line<T> line;
public:
	Circle();
	Circle(Point<T>& a, Line<T>& b);
	Circle(Circle& p) : Point<T>(p.m, p.tmp300), line(p.line) {}
	~Circle() {}
	Line<T> GetLine();
	Point<T> GetCentr();
	double S();
	double V();
	Circle& operator= (Circle& a);
	ostream& Cout(ostream& os);
};
