#include"Point.h"
#include "Line.h"
#pragma once
template<class D>
class Polygon :public Line<D> {
	Line* lin;
	int l;
public:
	Polygon() :Line<D>() {}
	Polygon(Point* b, int ll);
	Polygon(Line* llin, int ll);
	Polygon(Polygon& a);
	~Polygon() {}
	int GetL();
	double* LengthsLin();
	Line* ArrayLin();
	ostream& Cout(ostream& os);
	double A();
	double V();
	Polygon& operator =(Polygon& a);

};
