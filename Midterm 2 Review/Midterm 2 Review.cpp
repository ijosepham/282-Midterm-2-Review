// Midterm 2 Review.cpp
//

#include "pch.h"
#include <iostream>

int main(){}

int swap(int &a, int *b) {
	int temp;
	// either way works, either the code or the comments
	temp = *b; // temp = a
	*b = a; //' a = *b
	a = temp;

	return a;
}

void swapmain() {
	int x, y, z;
	// initialize etc
	z = swap(x, &y);
}


// this is how you make generic functions
template < typename T > // or template < class T >
void genericSwap(T &a, T *b) {
	// swap code
}

void genericProgramming() {
	int x, y, z;
	double m, n, zd;
	genericSwap(x, &y);
	genericSwap(m, &n);
	// now it works for any data types
}


// generic classes
template < typename T > // or if you wnat multiple, you can do < typename T1, typename T2 ... >
class MyTemplate {
private:
	T x;
	T y;
public:
	// functions that refer to vairables as data type T
};
// pretty much the same thing as java

void genClassMain() {
	MyTemplate<int> name; // or any <datatype>
}

/** the compiler will create different functions for the different data types**/
// so if you have swap(int), it'll create one for that, and then swap(double) will be its own too

// passing by reference allows you to change contents directly

// ****************** final will ask about writing and using a template class ****************** \\