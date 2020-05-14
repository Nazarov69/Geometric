#include "Cube.h";
#include "Point.h";
template<class S>
Cube<S>::Cube(Point<S>& a, Point<S>& b, Point<S>& c, Point<S>& d, Point<S>& e, Point<S>& f, Point<S>& g, Point<S>& h) :Square<S>(a, c) {
	Square<S>A(e, g);
	sq = A;
}

template<class L>
double Cube<L>::S() {
	return (*this).WidthSq().A() * 6;
}

template<class Z>
double Cube<Z>::V() {
	return sq.A() * sq.GetLength().Length();
}

template<class D>
Square<D> Cube<D>::WidthSq() {
	Square<D>B(a.GetDiag().GetPointA(), a.GetDiag().GetPointB());
	return B;
}

template<class S>
Square<S> Cube<S>::LengthSq() {
	return sq;
}

template<class G>
Cube<G>& Cube<G>::operator= (Cube<G>& a) {
	if (this != &a) {
		(*this).SetSquare(a.WidthSq());
		sq = a.LengthSq();
	}
	return (*this);
}

template<class B>
ostream& Cube<B>::Cout(ostream& os) {
	os << (*this).WidthSq() << (*this).LengthSq();
	return os;
}

