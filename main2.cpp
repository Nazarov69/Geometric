#include <iostream>
#include "Cont.h"
using namespace std;

int main(){
	Point<int>T(1, 3);
	Point<int>Q(3, 3);
	Point<int>I(0, 3);
	Line<int>Y(T, Q);
	cout << Y.Length() << endl;
	Circle<int>H(T, Y);
	Square<int>D(Q, T);
	Container<int>C;
	C.FOO1(Q);
	C.FOO1(Q);
	C.FOO1(D);
	cout << C;
	C.FOO2(I);
	C.cout(I);
}