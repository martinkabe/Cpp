#include <iostream>

using std::endl;
using std::cout;

class Complex
{
public:
	Complex();
	Complex(int, int);
	~Complex();
	Complex operator +(Complex c);
	void print_complex(Complex c);

private:
	int real;
	int imag;
};

Complex::Complex()
{
	this->real = 0;
	this->imag = 0;
}

Complex::~Complex()
{
}

Complex Complex::operator+(Complex c)
{
	Complex temp;
	temp.real = this->real + c.real;
	temp.imag = this->imag + c.imag;
	return temp;
}

Complex::Complex(int r, int i) {
	real = r;
	imag = i;
}

void Complex::print_complex(Complex c) {
	cout << "Complex number is: " << c.real << " + " << c.imag << "i" << endl;
}

int main()
{
	Complex c1(2, 5);
	Complex c2(3, 1);
	Complex c;

	c = c1 + c2;
	c.print_complex(c);

	return 0;
}
