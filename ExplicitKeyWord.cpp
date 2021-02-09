#include <string>
#include <iostream>

class MyString
{
private:
	std::string m_string;
public:
	// explicit keyword makes this constructor ineligible for implicit conversions
//	explicit MyString(int x) // allocate string of size x
	MyString(int x)
	{
		m_string.resize(x);
	}

	MyString(const char* string) // allocate string to hold string value
	{
		m_string = string;
	}

	friend std::ostream& operator<<(std::ostream& out, const MyString& s);

};

std::ostream& operator<<(std::ostream& out, const MyString& s)
{
	out << s.m_string;
	return out;
}

void printString(const MyString& s)
{
	std::cout << s;
}

int TestExplicitKeyWord()
{
	int i = 5;

	MyString s1(i);
	MyString s2(5); 
	MyString s3("x");
	MyString s4('x');
	MyString s5((short)5);

	MyString mine = i;
	std::cout << mine;

	printString(i); // compile error, since MyString(int) can't be used for implicit conversions

	return 0;
}