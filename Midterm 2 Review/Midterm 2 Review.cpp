// Midterm 2 Review.cpp
//

#include "pch.h"
#include <iostream>

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

//********* BINARY OPERATORS ( like operator+ etc) WILL BE ON THE TEST, MEMBER VS NONMEBER ***********
// nonmember functions are friends, which would require two parameters vs only one as a member function
// this is because member functions will be able to use an implicit parameter
// pemdas applies to operators

// ********* look at operator overloading restrictions ********* 
// ********* be fluent in operator functions ********* 
// >> and << operators need to be declared as friend functions ( friends )
// this is because they both belong to cin and coit, which belongs to iostream class

// P1 + 5 can be done as a member
// 5 + P1 most be done as a friend, this is because 5 is not an object, its a primitive data type
//		the compiler will see 5.operator+(P1), which doesnt make any sense to the compiler

// == is for comparing ( Boolean expressions ), = is for assigning
// == is relatively the same as the .equals ( ) function

// != operator can be defined using ==
template < typename T >
class MyClass {
public:
	bool operator==(T);
	bool operator!=(T);
	T* operator+=(T);
};

template<typename T>
bool MyClass<T>::operator==(T param) {
	// some code
	return false; // or true
}

template<typename T>
bool MyClass<T> :: operator!=(T param) {
	return !(*this == param);
}

// operator+= should return a pointer because youre incrementing the value directly and you need to update it

// check questions to aks yourself slides
// what data type should you return?
// should your parameters or function be constant?

// sticky vs nonsticky operations

// invoking constructor implicitly vs explicitly
// c O1; - implicit
// c O 1 = c ( ); - explicit

// Sizeof, she said something with unions, structs, other stuff
// 25% combination
// 25% array
// 25% operator ovverloading
// 25% local, global variable shadowing **** 


int main() {}