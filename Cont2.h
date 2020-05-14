#include "Cont.h"
template<class N>
template<class U>
void Container<N>::FOO1(U& a)
{
	Nothing** tmp = new Nothing * [tmp400];
	for (int i = 0; i < tmp400; i++){
		tmp[i] = mas[i];
	}
	delete[] mas;
	tmp400 = tmp400 + 1;
	mas = new Nothing * [tmp400];
	for (int i = 0; i < tmp400 - 1; i++){
		mas[i] = tmp[i];
	}
	mas[tmp400 - 1] = (&a);
	delete[]tmp;
}

template<class N>
template<class G>
void Container<N>::FOO2(G& a)
{
	Nothing** tmp = new Nothing * [tmp400];
	int j = 0;
	for (int i = 0; i < tmp400; i++)
		tmp[i] = NULL;
	for (int i = 0; i < tmp400; i++){
		if (mas[i] != &a){
			tmp[j] = mas[i];
			j++;
		}
	}
	delete[] mas;
	if (tmp[tmp400 - 1] == NULL){
		mas = new Nothing * [tmp400 - 1];
		tmp400 = tmp400 - 1;
	}
	else{
		mas = new Nothing * [tmp400];
	}
	for (int i = 0; i < tmp400; i++)
		mas[i] = tmp[i];
	delete tmp;
}

template<class I>
Container<I>::~Container(){
	delete[]mas;
}

template<class S>
Nothing* Container<S>::operator [](const int index){
	if ((index >= 0) || (index < tmp400))
		return (mas[i]);
	else cout << "Error" << endl;
}
template<class S>
ostream& operator <<(ostream& os, Container<S>& a){
	for (int i = 0; i < a.GetLength(); i++){
		os << *(a[i]);
	}
	return os;
}

template<class B>
template<class D>
void Container<B>::cout(D& a){
	cout << a;
}
