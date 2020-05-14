#include "Point.h"
#include "Line.h"
template <class Q>
class Square :public Point<Q> {
	Point<Q> DD;
public:
	Square() :Point<Q>(), DD(0) {}
	Square(Point<Q>& a, Point<Q>& b) :Point<Q>(a), DD(b) {}
	Square(Square& tmp) :Point<Q>(tmp.m, tmp.tmp300), DD(tmp.DD) {}
	void SetSquare(Square& a);
	Line<Q> GetDiag();
	double S();
	double V();
	Square& operator= (Square& a);
	ostream& Cout(ostream& os);
	~Square() {}
};

