#pragma once
#include "Line.h"
template<class R>
class Triangle :public Line<R> {
	Point<R> CC;
public:
	Triangle() :Line<R>(), CC(0) {}
	Triangle(Point<R>& a, Point<R>& b, Point<R>& c) :Line<R>(b, c), CC(a) {}
	Triangle(Triangle& tmp) :Line<R>(tmp.GetPointA(), tmp.GetPointB()), CC(tmp.CC) {}
	Point<R> GetPointA();
	Point<R> GetPointB();
	Point<R> GetPointCC();
	double S();
	double V();
	Triangle& operator = (Triangle<R>& p);
	ostream& Cout(ostream& os);
	~Triangle() {}
};
