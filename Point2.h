#include "Point.h"
template<class T>
inline Point<T>::Point(T ma, int aa) {
	if (aa >= 0) {
		tmp300 = aa;
		m = new T[tmp300];
		for (int i = 0; i < tmp300; i++)
			m[i] = ma;
	}
	else cout << "Error" << endl;
}

template<class B>
Point<B>::Point(Point& p) {
	tmp300 = p.tmp300;
	m = new B[tmp300];
	for (int i = 0; i < tmp300; i++)
		m[i] = p.m[i];
}

template<class T>
Point<T>::Point(T* mb, int ab) {
	if (ab >= 0) {
		tmp300 = ab;
		m = new T[tmp300];
		for (int i = 0; i < tmp300; i++)
			m[i] = mb[i];
	}
	else cout << "Error" << endl;
}

template<class B>
Point<B>::~Point() {
	delete[] m;
}

template<class D>
bool Point<D>::operator!= (const Point<D>& aa) {
	if (tmp300 != aa.tmp300)
		return true;
	for (int i = 0; i < aa.tmp300; i++) {
		if (m[i] != aa.m[i])
			return true;
	}
	return false;
}

template<class B>
ostream& Point<B>::Cout(ostream& os) {
	for (int i = 0; i < (*this).tmp300; i++)
		os << *this.m[i] << "\t";
	os << endl;
	return os;
}

template<class B>
Point<B>& Point<B>::operator= (const Point& aa) {
	if (this == &aa)
		return *this;
	tmp300 = aa.tmp300;
	m = new B[a];
	for (int i = 0; i < tmp300; i++)
		m[i] = aa.m[i];
	return *this;

}

template<class C>
Point<C>& Point<C>::operator= (const int ac) {
	tmp300 = ac + 1;
	m = new C[a];
	for (int i = 0; i < tmp300; i++)
		m[i] = a;
	return *this;
}

template<class D>
D* Point<D>::Getm() {
	return m;
}

template<class E>
int Point<E>::Gettmp300() {
	return tmp300;
}

template<class F>
double Point<F>::S() {
	return 0;
}

template<class G>
double Point<G>::V() {
	return 0;
}

template<class T>
inline void Point<T>::SetPoint(T* md, int ab) {
	if (ab >= 0) {
		delete[] m;
		m = new T[ab];
		for (int i = 0; i < ab; i++)
			m[i] = md[i];
		tmp300 = ab;
	}
	cout << "Error" << endl;
}
