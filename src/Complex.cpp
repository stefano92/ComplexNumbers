#include "Complex.h"

int real;
int imaginary;

//Contructors and destructor

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

//Arithmetic operations
Complex Complex::Add(Complex n) {
    return (this->getReal()+n.getReal(), this->getImaginary()+n.getImaginary());
}

static Complex Add(Complex n1, Complex n2) {
    return (n1.getReal()+n2.getReal(), n2.getImaginary()+n2.getImaginary());
}


//Getters
int Complex::getReal() {
    return this->real;
}

int Complex::getImaginary() {
    return this->imaginary;
}


