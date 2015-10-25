#include "Complex.h"

int real;
int imaginary;

Complex::Complex()
{
    //ctor
}

Complex::~Complex()
{
    //dtor
}

Complex::Complex(int real = 0, int imaginary = 0) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex Complex::Add(Complex n1, Complex n2) {
    return (n1.getReal()+n2.getReal(), n1.getImaginary()+n2.getImaginary());
}

int Complex::getReal() {
    return this->real;
}

int Complex::getImaginary() {
    return this->imaginary;
}


