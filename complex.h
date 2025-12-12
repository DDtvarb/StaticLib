//complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex {
	double real;
	double imag;
};

// Операции с комплексными числами
Complex add(Complex a, Complex b);
Complex subtract(Complex a, Complex b);
Complex multiply(Complex a, Complex b);
double modulus(Complex a);

#endif // COMPLEX_H