#include "Triangle.h"
template<class D>
Point<D> Triangle<D>::GetPointA() {
	return (*this).GetPointA();
}

template<class F>
Point<F> Triangle<F>::GetPointB() {
	return (*this).GetPointB();
}

template<class G>
Point<G> Triangle<G>::GetPointCC() {
	return CC;
}

template<class C>
double Triangle<C>::S() {
	Line<C>AC((*this).GetPointA(), CC);
	Line<C>AB((*this).GetPointB(), CC);
	double tmp = (AC.Length() + AB.Length() + (*this).Length()) / 2;
	return (sqrt(tmp * (tmp - AC.Length()) * (tmp - AB.Length()) * (tmp - (*this).Length())));
}

template<class F>
double Triangle<F>::V() {
	return 0;
}

template<class C>
Triangle<C>& Triangle<C>::operator =(Triangle<C>& p) {
	if (this != &p) {
		(*this).SetLine(p.GetPointA(), p.GetPointB());
		CC = p.GetPointCC();
	}
	return(*this);
}

template<class B>
ostream& Triangle<B>::Cout(ostream& os) {
	os << (*this).GetPointA() << (*this).GetPointB() << (*this).GetPointCC();
	return os;
}
