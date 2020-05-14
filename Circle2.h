#include "Circle.h"
template<class X>
Circle<X>::Circle() :Point<X>() {
	Line<X> E;
	line = E;
}


template<class U>
Circle<U>::Circle(Point<U>& a, Line<U>& b) : Point<U>(a) {
	line = b;
}

template<class D>
Line<D> Circle<D>::GetLine() {
	return line;
}

template<class N>
double Circle<N>::S() {
	return 3.14 * line.Length() * line.Length();
}

template<class K>
double Circle<K>::V() {
	return 0;
}

template<class R>
Point<R> Circle<R>::GetCentr() {
	Point<R> tmp((*this).Getm(), (*this).Gettmp300());
	return tmp;
}

template<class G>
Circle<G>& Circle<G>:: operator=(Circle<G>& a) {
	if (this != &a) {
		(*this).SetPoint(a.GetPointA().Getm(), a.GetPointA().Gettmp300());
		line = a.Getline();
		return(*this);
	}
	return(*this);
}

template<class B>
ostream& Circle<B>::Cout(ostream& os) {
	Point<B> tmp((*this).Getm(), (*this).Gettmp300());
	os << tmp << line;
	return os;
}
