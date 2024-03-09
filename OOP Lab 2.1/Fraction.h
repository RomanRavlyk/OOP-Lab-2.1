#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fraction {
private:
	int first;
	int second;
public:
	Fraction() : first(0), second(1) {}
	Fraction(int num, int denom) : first(num), second(denom) {}
	Fraction(const Fraction& other) : first(other.first), second(other.second) {}
	int ipart() const;
	int getFirst() const { return first; };
	int getSecond() const { return second; };
	void setFirst(int value);
	void setSecond(int value);
	void Read();
	void Display() const;
	bool Init(int value);
	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);
	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

};