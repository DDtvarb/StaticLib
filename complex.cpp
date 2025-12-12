//complex.cpp
#include "complex.h"
#include <cmath>

//другой метод

Complex add(Complex a, Complex b) {
	Complex result;
	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;
	return result;
}

Complex subtract(Complex a, Complex b) {
	Complex result;
	result.real = a.real - b.real;
	result.imag = a.imag - b.imag;
	return result;
}

Complex multiply(Complex a, Complex b) {
	Complex result;
	result.real = a.real * b.real - a.imag * b.imag;
	result.imag = a.real * b.imag + a.imag * b.real;
	return result;
}

double modulus(Complex a) {
	return sqrt(a.real * a.real + a.imag * a.imag);

}
