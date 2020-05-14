#include"Circle.h"
#include"Cube.h"
#include"Triangle.h"
#include"Square.h"
#include"Polygon.h"
#include"Line.h"
#include"Point.h"
#include"Nothing.h"
template<class S>
class Container {
	Nothing** mas;
	int tmp400;
public:
	Container() {};
	template <class U>
	void FOO1(U& a);
	template<class G>
	void FOO2(G& a);
	int GetLength() {
		return tmp400;
	}
	Nothing* operator[] (const int index);
	template<class K>
	friend ostream& operator<<(ostream& os, Container<K>& a);
	template<class D>
	void cout(D& a);
	~Container();
};
