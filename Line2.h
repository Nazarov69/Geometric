#include "Line.h"
template<class C>
Line<C>::Line(Point<C>& aa, Point<C>& bb) :Point<C>(a) {
	mq = bb;
}

template<class I>
Line<I>::Line(Line<I>& p) : Point<I>(p.Getm(), p.Gettmp300()) {
	mq = p.GetPointB();
}

template<class J>
Point<J> Line<J>::GetPointA() {
	Point<J> A((*this).Getm(), (*this).Gettmp300());
	return A;
}

template<class U>
Point<U> Line<U>::GetPointB() {
	return mq;
}

template<class K>
double Line<K>::Length() {
	double tmp = 0;
	if ((*this).Gettmp300() == mq.Gettmp300()) {
		for (int i = 0; i < mq.Gettmp300(); i++)
			tmp = tmp + (mq.Getm()[i] - (*this).Getm()[i]) * (mq.Getm()[i] - (*this).Getm()[i]);
		tmp = sqrt(tmp);
		return tmp;
	}
	return 0;
}

template<class C>
Line<C>& Line<C>::operator= (Line<C>& c) {
	(*this).SetPoint(c.GetPointA().Getm(), c.GetPointA().Gettmp300());
	(*this).mq = c.mq;
	return (*this);
}

template<class J>
ostream& Line<J>::Cout(ostream& os) {
	os << (*this).GetPointA();
	os << (*this).GetPointB();
	return os;
}

template<class L>
double Line<L>::S() {
	return 0;
}

template<class M>
double Line<M>::V() {
	return 0;
}

template<class J>
void Line<J>::SetLine(Point<J>& one, Point<J>& two) {
	(*this).SetPoint(one);
	mq = two;
}

