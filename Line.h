#pragma once
#include"Point.h"
template <class H>
class Line :public Point<H> {
	Point<H> mq;
public:
	Line() : Point<H>() {
		Point<H> a;
		mq = a;
	}
	Line(Point<H>& aa, Point<H>& bb);
	Line(Line& p);
	double S();
	double V();
	void SetLine(Point<H>& one, Point<H>& two);
	Point<H> GetPointA();
	Point<H> GetPointB();
	double Length();
	Line& operator= (Line& c);
	ostream& Cout(ostream& os);
	~Line() {}
};