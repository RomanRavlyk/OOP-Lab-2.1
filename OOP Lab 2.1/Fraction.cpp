#include "Fraction.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void Fraction::setFirst(int value) {
	first = value;
};

void Fraction::setSecond(int value) {
	second = value;
};

int Fraction::ipart() const {
	int result = first / second;
	return result;
}

void Fraction::Display() const {
	cout << "First: " << getFirst() << endl;
	cout << "Second: " << getSecond() << endl;
	cout << "Result: " << ipart() << endl;
}

void Fraction::Read()
{
	cout << "Input first num: "; cin >> first;
	cout << "Input second num: "; cin >> second;
	if (Init(second)) {
		setSecond(second);
	}
	else cout << "Unaccaptable number" << endl;
	setFirst(first);
}

bool Fraction::Init(int value){
	return value > 0;
}

Fraction& Fraction::operator ++()
{
	first++;
	return *this;
}
Fraction& Fraction::operator --()
{
	first--;
	return *this;
}
Fraction Fraction::operator ++(int)
{
	Fraction t(*this);
	second++;
	return t;
}
Fraction Fraction::operator --(int)
{
	Fraction t(*this);
	second--;
	return t;
}

ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Fraction& r)
{
	cout << " Re = "; in >> r.first;
	cout << " Im = "; in >> r.second;
	cout << endl;
	return in;
}

Fraction::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;
	return ss.str();
}

