#include <cassert>
#include <iostream>

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// Default constructor
	Fraction(int numerator = 0, int denominator = 1) :
		m_numerator(numerator), m_denominator(denominator)
	{
		assert(denominator != 0);
	}

	// Copy constructor
	Fraction(const Fraction& copy) :
		m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
	{
		// no need to check for a denominator of 0 here since copy must already be a valid Fraction
		std::cout << "Copy constructor called\n"; // just to prove it works
	}

	friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
	int getNumerator() { return m_numerator; }
	void setNumerator(int numerator) { m_numerator = numerator; }
};

void printFraction(const Fraction& f)
{
	std::cout << f;
}

std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator <<"\n";
	return out;
}

int ConvertConstructor()
{
	printFraction(Fraction(6, 2));

	return 0;
}