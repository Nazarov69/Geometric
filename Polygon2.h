#include "Polygon.h"
template<class F>
Polygon<F>::Polygon(Point<F>* b, int ll) :Line(b[0], b[1]), l(ll) {
	lin = new Line[ll - 1];
	for (int i = 1; i < ll - 1; i++) {
		Line<F> tmp(b[i], b[i + 1])
			lin[i - 1] = tmp;
	}
	Line<F> tmp(b[l - 1], b[0]);
	lin[ll - 2] = tmp;

}

template<class B>
Polygon<B>::Polygon(Line<B>* llin, int ll) :Line(llin[0]), size(ll) {
	lin = new Line<B>[ll - 1];
	for (int i = 0; i < ll - 1; i++)
		lin[i] = llin[i + 1];
}

template<class D>
Polygon<D>::Polygon(Polygon<D>& a) :Line(a.GetPointA(), a.GetPointB()), l(a.l) {
	lin = new Line<D>[a.l - 1];
	for (int i = 0; i < l - 1; i++)
		lin[i] = a.lin[i];
}

template<class N>
int Polygon<N>::GetL() {
	return l;
}
template<class H>
double* Polygon<H>::LengthsLin() {
	double* tmp = new double[l];
	tmp[0] = (*this).Length();
	for (int i = 1; i < l; i++)
		tmp[i] = lin[i - 1].Length();
	return tmp;
}

template<class V>
Line<V>* Polygon<V>::ArrayLin() {
	Line<V>* tmp = new Line<V>[l];
	Line<V> c = ((*this).GetPointA(), (*this).GetPointB());
	tmp[0] = c;
	for (int i = 1; i < l; i++)
		tmp[i] = lin[i - 1];
	return tmp;
}

template<class V>
ostream& Polygon<V>::Cout(ostream& os) {
	for (int i = 0; i < (*this).GetL(); i++)
		os << (*this).ArrayLin()[i];
	return os;
}

template<class B>
double Polygon<B>::A() {
	return 0;
}

template<class W>
double Polygon<W>::V()
{
	return 0;
}

template<class G>
Polygon<G>& Polygon<G>::operator = (Polygon<G>& a) {
	if (this != &a) {
		(*this).SetLine(a.GetPointA(), a.GetPointB());
		delete[] lin;
		lin = new Line<G>[a.GetL() - 1];
		for (int i = 0; i < size - 1; i++)
			lin[i] = a.ArrayLin()[i + 1];
		l = a.GetL();
	}
	return *this;
}
