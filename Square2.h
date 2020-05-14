#include "Square.h"
template<class W>
double Square<W>::S() {
	Point<W>A((*this).Getm(), (*this).Gettmp300());
	Line<W> tmp(A, DD);
	return (tmp.Length() * tmp.Length() / 2);
}

template<class S>
double Square<S>::V() {
	return 0;
}


template<class B>
Line<B> Square<B>::GetDiag() {
	Point<B>A((*this).Getm(), (*this).Gettmp300());
	Line<B>Tmp2(A, DD);
	return Tmp2;
}

template<class C>
Square<C>& Square<C>::operator= (Square<C>& a) {
	if (this != &a) {
		(*this).SetPoint(a.GetPointA().Getm(), a.GetPointA().Gettmp300());
		DD = a.GetDiag().GetPointB();
		return(*this);
	}
	return(*this);
}

template<class Q>
ostream& Square<Q>::Cout(ostream& os) {
	Point<Q> Tmp((*this).Getm(), (*this).Gettmp300());
	os << Tmp;
	os << (*this).GetDiag().GetPointB();
	return os;
}

template<class V>
void Square<V>::SetSquare(Square& a) {
	(*this).SetPoint(a.GetDiag().GetPointA());
	DD = a.GetDiag().GetPointB();
}
