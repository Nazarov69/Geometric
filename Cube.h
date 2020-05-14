#include "Square.h"
template <class Y>
class Cube : public Square<Y> {
	Square<Y> sq;
public:
	Cube() :Square<Y>() {
		sq = new Square;
	}
	Cube(Point<Y>& a, Point<Y>& b, Point<Y>& c, Point<Y>& d, Point<Y>& e, Point<Y>& f, Point<Y>& g, Point<Y>& h);
	Cube(Square<Y>& A, Square<Y>& B) :Square<Y>(A), sq(B) {}
	Cube(Cube& tmp) :Square<Y>(tmp.GetDiag().GetPointA(), tmp.GetDiag().GetPointB()), sq(tmp.sq) {}
	double S();
	double V();
	Square<Y> WidthSq();
	Square<Y> LengthSq();
	Cube& operator= (Cube& a);
	ostream& Cout(ostream& os);
	~Cube() {}
};
